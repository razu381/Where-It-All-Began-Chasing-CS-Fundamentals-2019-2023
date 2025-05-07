let toUpper = (str,display) => {
    let mod_str = str.toUpperCase();
    display(mod_str);
}

toUpper("Hello", (str) => {
    console.log(str);
})