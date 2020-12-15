// console.log(`Your port is ${process.env.PORT}`); // undefined
// console.log(`Your port is ${process.env.PORT}`);


var fs = require('fs');
const path = require('path');
const dotenv = require('dotenv');
const EventEmitter = require('events')
const moment = require('moment')
dotenv.config();
// let dirName;
// if (process.env.NODE_ENV ===  'development'){
//     dirName = 'src'
// }else if (process.env.NODE_ENV ===  'production'){
//     dirName = 'production/src'
// }
// console.log(__dirname + '/test')

const creatFolderEventEmitter = new EventEmitter()
const createSourceFileEmitter = new EventEmitter();
const createDestFileEmitter = new EventEmitter();

creatFolderEventEmitter.on('createFolder', async () => {
    console.log('started creating folder')
    fs.mkdirSync(path.join(__dirname, process.env.NODE_ENV), (err) => {
        if (err) {
            return console.error(err);
        }
        console.log('Directory created successfully!');
    });

    fs.mkdirSync(path.join(__dirname + `/${process.env.NODE_ENV}`, 'src'), (err) => {
        if (err) {
            return console.error(err);
        }
        console.log('Directory created successfully!');
    });

    fs.mkdirSync(path.join(__dirname + `/${process.env.NODE_ENV}`, 'dest'), (err) => {
        if (err) {
            return console.error(err);
        }
        console.log('Directory created successfully!');
    });

})

createDestFileEmitter.on('createDestFile', () => {
    fs.writeFile(`${__dirname + `/${process.env.NODE_ENV}/dest`}/${moment().format('YYYY_MM_DD_HH_MM_SS')}.txt`, 'Hello Source folder', function (err) {
        if (err)
            console.log('Destination file not created')
        else
            console.log('Destination file created')
    })
})

createSourceFileEmitter.on('createSourceFile', () => {
    fs.writeFile(`${__dirname + `/${process.env.NODE_ENV}/src`}/${moment().format('YYYY_MM_DD_HH_MM_SS')}.txt`, 'Hello', function (err) {
        if (err)
            console.log('Source file not created')
        else
            console.log('Source file created')
    })
})



process.on('SIGINT', () => {
    console.log('Received Interrupt Signal');
    process.exit()
});


creatFolderEventEmitter.emit('createFolder')
createSourceFileEmitter.emit('createSourceFile')
createDestFileEmitter.emit('createDestFile')
