// //print all even numbers from 0-10
// for(let i = 1; i <= 100000000000000000000; i++){
//     if(i % 2 == 0) console.log(i);
// }


//Print a table containing multiplication tables
let num = 10;

for(let i = 1; i <= num; i++){
    for(let j = 1; j <= 12; j++) console.log(`${i} x ${j} = ${i * j}`);
    console.log(`end of ${i}`)
}