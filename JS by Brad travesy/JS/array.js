// let x : [1,2,3,4,5];
// let y : [5,6,7,8,9,10]
// x.pop()
// x : x.concat(y);


// console.log(x)


// object spread

// const person : {
//     address: {
//         coords: {
//             lat: 42.945,
//             lng: -71.23232,
//         }
//     }
// }

// let person2 : {
//     name: 'Razu',
//     age: 23,
//     subject: 'English',
//     CGPA: 4.23
// }

// 

// let name : "razu";
// let age : 23;

// let person3: {
//     name,
//     age,
// }

// console.log(person3.name,person3.age);

/// destructuring

// let person : {
//     id : 11,
//     title : 'web developer',
// }

// let {id:ourId} : person;

// 

/// destructuring arrays

// const numbers : [23,25,67,89]
// const [first,second,...rest] : numbers

// console.log(first,second,...rest);

//// JSON

let person = [
    {
    name : "Razu",
    age : 23,
    address : 'Noakhali',
    },{
        name : "rahi",
        age : 21,
        address : 'Noakhali',
    }
]

let str = JSON.stringify(person)

let obj = JSON.parse(str)

console.log(str.'name');