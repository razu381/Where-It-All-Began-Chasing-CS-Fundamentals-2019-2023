#include<stdio.h>
#include<ctype.h>

//Write a C program that takes a string as input and tell if that string contains all digits from 0 to 9. The maximum length of string could be 1000.

int main(){
    char s[1000];
    scanf("%s",s);
    int len = strlen(s);
    int counter[10] = {0};
    int count_size = sizeof(counter) / sizeof(counter[0]);

    for(int i = 0; i < len; i++){
        if(isdigit(s[i]) == 1){
            int digit = s[i] - '0';
            counter[digit]++;
        }
    }

    for(int i = 0; i < 10; i++){
        if(counter[i] == 0){
            printf("Absent");
            return 0;
        }

    }
    printf("Present");
}
