function multiplier(t){
    return function(n){
        return n * t;
    }
}

const multiplyBy5 = multiplier(5);

console.log(multiplyBy5(10));