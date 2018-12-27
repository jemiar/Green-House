const SerialPort = require('serialport');
const Readline = require('@serialport/parser-readline');
const port = new SerialPort('/dev/ttyACM1', 9600);
const parser = port.pipe(new Readline({delimiter: '\n'}));

setInterval(myF, 1000);
//port.write('a', function(err) {
//	if(err) {
//		return console.log('Cannot write', err.message);
//	}
//	console.log("Message write");
//});

parser.on('data', function(data) {
	console.log('Data:', data);
});

function myF() {
	port.write('b', function(err) {
	if(err) {
		return console.log('Cannot write', err.message);
	}
	console.log("Message write");
	});
}
