const http = require('http');
const fs = require('fs');
const PORT = 3001;

const server = http.createServer((req, res) => {
    console.log('server request');
    res.setHeader('Content-Type', 'text/html');

    if (req.url = '/') {
        fs.readFile('views\\index.html', (err, data) => {
            if (err) {
                console.log(err);
                res.end();
            } else {
                res.write(data);
                res.end();
            }
        })
    }

});

server.listen(PORT, 'localhost', error => {
    error ? console.log(error) : console.log(`listen port ${PORT}`)
})