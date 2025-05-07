//Write a function named find_firstIndex() which will
//take a string and a character as parameters and return
//the first index where the character is found in that
//string. If it is not found then return -1.

#include<stdio.h>
#include<string.h>

int find_last_Index(char s[],char c){
    int len = strlen(s);
    for(int i = len-1; i >= 0;i--){
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}


int main(){
    char s[] = "hellloooolkmnopqrstuvwx";
    char c = 'l';
    int res = find_last_Index(s,c);
    printf("%d",res);
}
