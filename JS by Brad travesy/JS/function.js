function logIn(person){
    return `${person.name} logged in with id ${person.Id}`
}

let person = {
    name: "Razu",
    Id : "009",
}

// console.log(logIn(person));

//// Generate random numbers from an Array
let num = [15,72,83,40,5];
function randNum(arr){
    let arrLen = arr.length
    let randomPos = Math.round(Math.random() * (arrLen-1));
    return arr[randomPos];
}

console.log(randNum(num));
