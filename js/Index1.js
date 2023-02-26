let na1me = "Raunak";
console.log(na1me);

//object
let person ={
    name: 'Aloo',
    age: 34
}
console.log(person);
//dot notation
console.log(person.name);

//bracket notation
person['name'] = 'Alon';
console.log(person.name);


//Array
let arr = ['red','blue',2];
console.log(arr);
arr[3]='Aloo';
console.log(arr);

//Function
function greet(nme){
    console.log("Hello " + nme);

}

greet('Aloooo');

function square(number){
    return number * number;
}

console.log(square(2));