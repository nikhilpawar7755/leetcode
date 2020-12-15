// const express = require('express')
// const app = express()
// const https = require('https')
// // app.get('/', (req, res) => {
// //   res.send('Hi!')
// // })


// https.get('https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY', (resp) => {
//     let data = '';

//     // A chunk of data has been recieved.
//     resp.on('data', (chunk) => {
//         data += chunk;
//     });

//     // The whole response has been received. Print out the result.
//     resp.on('end', () => {
//         console.log(JSON.parse(data).explanation);
//     });

// }).on("error", (err) => {
//     console.log("Error: " + err.message);
// });
// // // app.listen(3000, () => console.log('Server ready'))


var request=require("request");
 var options = {
          method: 'GET',
          uri: 'https://quotes.rest/qod',
          headers: {
            'Accept': 'application/json'
            }
        };
  request(options, function(error, response, body) {
               if(error){
                  console.log(error);
             }else{
                  console.log(JSON.parse(response['body']).contents.quotes[0].quote);
            }
});
