let getCelsius = F =>  console.log(`The temperature is ${((F - 32) * 5 / 9).toFixed(2)} \xB0C`);

//getCelsius(64);

//Challenge 2 -min max


function minMax(arr){
    return num = {
        min : Math.min(...arr),
        max : Math.max(...arr)
    }
}

//console.log(`Max = ${minMax([1, 2, 3, 4, 5]).max} Min = ${minMax([1, 2, 3, 4, 5]).min}`)

//Challenge - 03 (IIFE)

(function (len,width){
    console.log(len * width) 
})(10,5)



