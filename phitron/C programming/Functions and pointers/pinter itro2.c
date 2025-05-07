#include<stdio.h>
//int sum(int n, int a[]);
int main(void){

    char s[] = "511472o5t6";
    int freq[10] = {0};
    for(int i = 0; i < strlen(s);i++){
            int n = (int)s[i] - 48;
            printf("%d \n",n);
            for(int j = 0; j < s; j++){
                if(n >= 0 && n <= 9){
                freq[j]++;
                }
            }
    }
    for(int i = 0; i < 10; i++){
        printf("%d ",freq[i]);
    }
}


