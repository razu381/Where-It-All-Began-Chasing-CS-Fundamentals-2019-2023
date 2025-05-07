
#include<stdio.h>
#include<string.h>


int main(void){
    char s[] = "Phitron Member ";
    char name[101];
    fgets(name,101,stdin);
    int len_n = strlen(name);
    int len_s = strlen(s);
    int total_len = len_n + len_s;

    for(int i = len_s, j = 0;i < total_len;i++,j++){
        s[i] = name[j];
    }
    printf("%s",s);


}
