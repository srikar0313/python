// console.log("hello");
const http = require('http');
 
const hostname = '127.0.0.1';
const port = 3000;
 
const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <meta http-equiv="X-UA-Compatible" content="ie=edge">
      <title>Keyframes and Animations</title>
  </head>
  <style>
      .container {
          background-color: greenyellow;
      }
  
      .box {
          background-color: green;
          width: 250px;
          height: 250px;
          position: relative;
          /* animation-name: harry1; */
          animation-name: harry2;
          animation-duration: 8s;
          animation-iteration-count: 1;
          /* animation-fill-mode: alternate; */
          /* animation-timing-function: ease-in-out; */
          /* animation-delay: 3s; */
          /* animation-direction: reverse;  */
  
          /* These properties can be set using this shorthand */
          /* animation: animation-name animation-duration animation-timing-function animation-delay animation-iteration-count animation-fill-mode; */
          /* animation: harry 5s ease-in 1s 12 backwards; */
  
      }
  
      @keyframes harry2 {
          0%{
              top:0px;
              left:0px;
          }
          25%{
              top: 250px;
              left: 0px;
          }
          75%{
              top: 250px;
              left: 250px;
          }
          100%{
              top: 0px;
              left: 250px;
          }
          
      }
      @keyframes harry1 {
          from {
              width: 200px;
          }
  
          to {
              width: 1400px;
          }
      }
  </style>
  
  <body>
      <div class="container">
          <div class="box">
              This is a box
          </div>
      </div>
  </body>
  
  </html>
  `);
});
 
server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});