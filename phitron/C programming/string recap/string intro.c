#include<stdio.h>
#include<string.h>

int main(void){
    char s[100] = "Hello World";
    char t[] = "facebook";
    int lens = strlen(s);
    int lent = strlen(t);
    int total_len = lens+lent;
    printf("%d %d %d \n",lens,lent,total_len);
    for(int i = lens, j = 0; i < total_len; i++){
        s[i] = t[j];
    }
    t[total_len] = '\0';
    printf("%s",s);
}
