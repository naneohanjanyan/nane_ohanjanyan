const http = require('http');
const PORT = 3002;

const httpServer = http.createServer(function (request, response) {

    const str = "welcome...";

    response.write(str, 'utf16', () => {
        console.log("Writing string Data...");
    });
    response.end(' ok');
});

httpServer.listen(PORT, () => {
    console.log("Server is running at port 3000...");
});
