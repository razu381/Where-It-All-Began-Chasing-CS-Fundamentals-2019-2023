#include<stdio.h>
#include<string.h>

int main(){
    char s[] = "madam";
    char s_rev[50];
    strcpy(s_rev,s);
    strrev(s_rev);
    printf("%s",s_rev);
    int res = strcmp(s,s_rev);
    printf("%d",res);
}
