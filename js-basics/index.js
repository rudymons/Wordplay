//run with node index.js or open with live server and inspect etc...
let name = 'Yowza';
const interestRate = 1;
name = 1;

name = 'Rudy'
let age =22;

let person = {
    name: 'Rudy',
    age: '22'
};

//Dot
person.age = 23;
person.name = "Blums";

//Bracket
person['name'] = "Blums";

//dynamic :0
let selection = 'name';
person[selection] = 'Rudy';

//array
let selectedColors = ['red','blue'];
//wow dynamic type of array is object
selectedColors[2] = 'green';
selectedColors[3] = 1;
//not needed to go by top to bot
person.name = "Rudy";
greet(square(2));


function greet(name) {
    console.log('Hello ' + name + '! ');
}

//with return type
function square(number){
    return number*number;
}