#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){
    char s[51];
    scanf("%s",&s);
    int len = strlen(s);
    int a_count = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == 'a'){
            a_count++;
        }
    }

    printf("%d %d",len,a_count);
}
