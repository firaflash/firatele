import mongoose from "mongoose";

const bookschema = mongoose.Schema(

{
    title:{
        type: String,
        required: true,
    },
    author: {
        type: String,
        required: true,
    },
    publishyear: {
        type: Number,
        required: true,
    }
},
{
    timestamps: true,
}

);


export const book = mongoose.model('Cat', bookschema);    