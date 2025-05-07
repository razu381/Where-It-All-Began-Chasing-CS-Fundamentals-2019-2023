#include<stdio.h>
#include<string.h>

int main(void){
    char s[] = "abcd";
    int lens = strlen(s);
    int counter[26] = {0};

    for(int i =0; i < lens;i++){
        int value = s[i] - 97;
        counter[value]++;
    }

    for(char val = 'a', i =0; val < 'z';val++,i++){
        printf("%c => %d \n",val,counter[i]);
    }
}
