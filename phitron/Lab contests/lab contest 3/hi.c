#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main(){
    char s[1001];
    fgets(s,1001,stdin);

    if(s[0] > 96){
        s[0] -= 32;
    }
    puts(s);

}
