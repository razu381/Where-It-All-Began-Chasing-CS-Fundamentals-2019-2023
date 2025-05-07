#include<stdio.h>
#include<string.h>

int is_capital(char c){
    if(c >= 'A' && c <= 'Z'){
        //printf("Capital");
        return 1;
    }else if(c >= 'a' && c <= 'z'){
        return 0;
    }
}

int main(){
    char s[101];
    scanf("%s",s);
    int is_cap = 0;

    for(int i = 1; i <= strlen(s);i++){
        if(is_capital(s[i]) == 1){
            is_cap = 1;
        }else{
            is_cap = 0;
            break;
        }
    }

    if(is_capital(s[0]) == 0 && is_cap == 1){
        s[0] -= 32;
        for(int i = 1; i < strlen(s);i++){
            s[i] += 32;
        }
    }else if(s[0] == 1 && is_cap == 1){
        for(int i = 0; i < strlen(s);i++){
            s[i] += 32;
        }
    }

    printf("%s",s);


}
