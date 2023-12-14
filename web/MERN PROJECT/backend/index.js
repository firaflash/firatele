import express, { request, response } from "express";
import { port, mongoDBURL } from "./config.js";
import mongoose from "mongoose";
import { book } from "./models/bookmodel.js";

const app = express();

app.use(express.json());

app.get('/', (request, Response) => {
    console.log(request)
    return Response.status(234).send('welcome no To fira flash website fuck you betselot');
});
//nefff
app.post('/books', async(request,response) => {
    try{
        if (
            !request.body.title ||
            !request.body.author ||
            !request.body.publishyear
        ){
        return response.status(400).send({
            message: 'send all required fields: title, author, publisheyear',
        });
    }
    const newBook = {
        title: request.body.title,
        author: request.body.author,
        publishyear: request.body.publishyear,
    };
    const book = await book.creat(newBook);
    return response.status(201).send(book);
       
    } catch(error){
            console.log(error.message);
            response.status(500).send({message: error.message});
    }
});

mongoose
    .connect(mongoDBURL)
    .then(() => {
        console.log('app connected to data base');
        app.listen(port, () => {
            console.log(`app is listening to port: ${port}`);
        });
    })
    .catch((error) => {
        console.log(error);
    });

