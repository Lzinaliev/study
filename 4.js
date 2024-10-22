let fs = require('fs'); //переменная для работы с файловой системой
let arg = process.argv; //
let inText; //
let i = 0, n = 1; // объявление переменных 
let testString = ''; 

for(i = 1; i < 127; i++){
	testString += String.fromCharCode(i) // string аналог статический метод класса как в джаве или шарпе
}

fs.writeFileSync('output.txt', testString); // синхронно записываем файл 

inText = fs.readFileSync('output.txt'); //байтовый буфер

inText = inText.toString(); 
testString = ''; //пустая строка
for(i = 1; i < 256; i++){
	testString += inText.charCodeAt(i) +'\n'; 
}
console.log(testString);