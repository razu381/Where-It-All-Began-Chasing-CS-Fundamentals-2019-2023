#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main(){
    char s[101];
    scanf("%s",&s);
    int len = strlen(s);
    int up_count = 0;
    for(int i = 0; i < len; i++){
        if(isupper(s[i])){
            up_count++;
        }
    }
    //printf("upper count = %d \n",up_count);

    if(up_count == len){
        for(int i = 0;i < len;i++){
            s[i] = tolower(s[i]);
        }
    }else if(up_count == len - 1 && islower(s[0])){
        s[0] = toupper(s[0]);
        for(int i = 1;i < len;i++){
            s[i] = tolower(s[i]);
        }
    }

    printf("%s",s);
}
