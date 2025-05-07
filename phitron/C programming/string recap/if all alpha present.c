#include<stdio.h>
#include<string.h>

int main(){
    char s[] = "Hi how are you ";
    int counter = 1
    ;
    int len = strlen(s);
    for(int i = 0; i < len;i++){
        if(s[i] == ' '){
            counter++;
        }
    }
    printf("%d",counter);

}
