#include<stdio.h>
#include<string.h>

void string_cpy(char a[], char b[]){
    int lena = strlen(a);
    int lenb = strlen(b);
    //printf("%d %d",lena, lenb);
    for(int i = 0; i < lenb;i++){
        a[i] = b[i];
    }

}


int main(void){
    char a[50];
    char b[] = "world";
    string_cpy(a,b);
    printf("%s",a);
 }
