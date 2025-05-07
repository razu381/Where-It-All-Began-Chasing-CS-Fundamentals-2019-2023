window.onload = function(){
    main();
}

// function main(){
//     let btn = document.getElementById('button-1');
//     btn.addEventListener('click',function (e){
//         alert("Hello World");
//     })

// }



function main(){
    let btn = document.getElementById('button-1');
    let title =  document.getElementById('title');

    let current =  title.innerText;
    let next = "Changed HTML";

    btn.addEventListener('click', function (e){
        title.innerHTML = "Changed HTML";

        
    })
}