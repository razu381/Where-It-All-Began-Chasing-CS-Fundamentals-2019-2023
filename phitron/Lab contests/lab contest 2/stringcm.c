#include<stdio.h>
#include<string.h>

int main(){
    char a[] = "apple";
    char b[] = "apples";


    int i = 0;
    while(a[i] == b[i] && a[i] != '\0' && b[i] != '\0'){
        i++;
    }
    if(a[i] == '\0' && b[i] != '\0'){
        printf("a is smaller");
    }else if(b[i] == '\0' && a[i] != '\0'){
        printf("b is smaller");
    }else if(a[i] < b[i]){
        printf("a is smaller");
    }else if(b[i] < a[i]){
        printf("b is smaller");
    }else if(a[i] == '\0' && b[i] == '\0 '){
        printf("equal");
    }
}
