import expess from "express";
import { port } from "./config.js"

const app = expess();

app.listen(port, () => {
    console.log(`App is listening to port: ${port}`);

});