#include<stdio.h>
#include<string.h>


void stringCat(char a[], char b[], char out[]){
    strcat(a,b);
    out = a;
    printf("%s",out);
}

int main(){
    char a[] = "jayanti khatri ";
    char b[] = "phitron ";
    char out[] = "";

    stringCat(a,b,out);
}
