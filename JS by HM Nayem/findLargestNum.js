let arr = [1,5,6,9,89,67,45,0,0.1,-1];
let max = arr[0];

for(let i = 1; i < arr.length; i++){
    if(arr[i] < max){
        max = arr[i];
    }
}


console.log(max)