#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char s[101];
    gets(s);
    bool is_dup = false;
    char sorted[101] = {0};
    sorted[0] = s[0];



    for(int i = 0; i < strlen(s);i++){
        for(int j = 0; j < strlen(sorted); j++){
            if(sorted[j] == s[i]){
                is_dup = true;
                break;
            }
        }
        if(is_dup == false){
            sorted[strlen(sorted)] = s[i];
        }
    }
    for(int i = 0; i < strlen(sorted);i++){
        printf("%c \n",sorted[i]);
    }
}
