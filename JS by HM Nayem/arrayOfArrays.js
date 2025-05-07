let pointTable = [
    [1,1],
    [2,2],
    [3,3],
    [4,4]
]

let tDA = [
    [1,2,3,4,5],
    [5,6,7,8,9,10,232,32],
    [11,12,13,14,15]
]

8/*
for(let i = 0; i < pointTable.length; i++){
    console.log("x = " + pointTable[i][0] + " Y = " + pointTable[i][1]);
}
*/

for(let i = 0; i < tDA.length; i++){
    for(let j = 0; j < tDA[i].length; j++){
        console.log(tDA[i][j]);
    }
    console.log("\n");
}