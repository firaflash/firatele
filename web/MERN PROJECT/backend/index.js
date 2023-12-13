import express from "express";
import { port, mongoDBURL } from "./config.js";
import mongoose from "mongoose";

const app = express();
app.get('/', (request, Response) => {
    console.log(request)
    return Response.status(234).send('welcome To fira flash website fuck you betselot');
});
//ne
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

