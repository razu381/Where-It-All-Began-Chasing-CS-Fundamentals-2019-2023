#include<stdio.h>
#include<string.h>


int main(void){
    char a[] = "14";
    char b[] = "16";
    char jogfol[101];
    strrev(a);
    strrev(b);
    //printf("%s \n%s",s1,s2);

    int i = 0, j = 0, k = 0,hate = 0;
    while(i < strlen(a)&& j < strlen(b)){
        int sum = (a[i] - '0' + b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++,j++,k++;
    }
    while(i < strlen(a)&& j < strlen(b)){
        int sum = (a[i] - '0' + b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++,j++,k++;
    }
    while(i < strlen(a)){
        int sum = (a[i] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++,k++;
    }
    while(i < strlen(b)){
        int sum = (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        j++,k++;
    }
    strrev(jogfol);
    printf("%s",jogfol);
    return 0;
}
