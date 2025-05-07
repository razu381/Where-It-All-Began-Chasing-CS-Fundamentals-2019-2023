let n = 10

let printTable = (n) => {
    for(let i = 0; i < n; i++){
        let isEven = (i) => i % 2 == 0;
        if(isEven(i)){
            console.log(`Row ${i+1} = Even`);
        }else{
            console.log(`Row ${i+1} = ODD `);
        }
        
    }
}

printTable(n);
