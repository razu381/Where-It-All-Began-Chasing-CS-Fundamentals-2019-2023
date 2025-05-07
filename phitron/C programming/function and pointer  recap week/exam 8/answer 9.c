#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check_pallindrome(char s[]){
    int len = strlen(s);
    //make all the letter lowercase
    for(int i = 0; i < len;i++){
        s[i] = tolower(s[i]);
    }
    int counter = 0;
    for(int i = 0, j = len-1; i < j; i++,j--){
        if(s[i] != s[j]){
            printf("%c%c ",s[i],s[j]);
            counter++;
        }
    }
    return counter;
}



int main(){
    for(int i = 0; i < 5; i++){
    char s[100];
    scanf("%s",&s);

    int res = check_pallindrome(s);
    printf("%d \n",res);
    }
}











