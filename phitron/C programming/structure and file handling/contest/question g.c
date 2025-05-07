#include<stdio.h>
#include<string.h>


int main(){
    int left,right;
    scanf("%d %d",&left,&right);
    char s[100000];
    scanf("%s",&s);
    //print first part
    for(int i = 0; i < left - 1; i++){
        printf("%c",s[i]);
    }
    //Reverse the string here:
    for(int i = right - 1; i >= left-1; i--){
        printf("%c",s[i]);
    }
    //print second part
    for(int i = right; i < strlen(s); i++){
        printf("%c",s[i]);
    }

}
