#include<stdio.h>
#include<string.h>

void dec_to_bin(int num, char bin[]){
    int idx = 0;
    while(num > 0){
        int digit = num % 2;
        num = num/2;
        bin[idx] = '0'+digit;
        idx++;
    }
    bin[idx] = '\0';

    for(int i = 0; bin[idx] < bin[idx-1];i++,idx--){
        char temp =  bin[idx];
        bin[idx] = bin[idx - 1];
        bin[idx - 1] = temp;
    }
}

int main(){
    int num = 10;
    char bin[100];
    dec_to_bin(num,bin);
    printf("%s",bin);
}
