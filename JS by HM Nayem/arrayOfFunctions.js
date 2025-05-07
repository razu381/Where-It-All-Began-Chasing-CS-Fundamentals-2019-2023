let a = 10;
let b = 20;

function sum(a,b){
    return a+b;
}
function subs(a,b){
    return a-b;
}
function times(a,b){
    return a*b;
}
function div(a,b){
    return a/b;
}

let arr = [sum,subs,times,div];

for(let i = 0; i < arr.length; i++){
    console.log(`${arr[i].name} = ` + arr[i](a,b));
}