let matrixA = [
    [1,3],
    [1,0],
    [1,2]
]

let matrixB = [
    [0,0],
    [7,5],
    [2,1]
]

for(let i = 0; i < matrixA.length; i++){
    for(let j = 0; j < matrixA[i].length;j++){
        console.log(matrixA[i][j] + matrixB[i][j]);
    }
    console.log('\n');
}

