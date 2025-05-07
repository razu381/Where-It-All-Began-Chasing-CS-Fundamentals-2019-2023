#include <stdio.h>
#include <string.h>


int main(){
    char a[10] = "Mpplys";
    char b[10] = "apple";

    int i = 0;

    while(a[i] == b[i] && a[i] != '\0' && b[i] != '\0' ){
        i++;
    }
    if(a[i] == '\0' && b[i] == '\0'){
        printf("Equal");
    }
    if(a[i] == '\0' && b[i] != '/0'){
        printf("A is smalller");
    }else if(a[i] != '\0' && b[i] == '/0'){
        printf("B is smaller");
    }else if(a[i] < b[i]){
        printf("A is smaller");
    }else{
        printf("B is smaller");
    }

}
