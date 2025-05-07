#include <stdio.h>
#include <string.h>
int main () {
    char s1[101];
    scanf("%s",s1);
    char s2[10] = "1111111";
    char s3[10] = "0000000";
    char *res1;
    char *res2;

    res1 = strstr(s1, s2);
    res2 = strstr(s1, s3);
    if(res1 != NULL || res2 != NULL){
        printf("YES");
    }else{
        printf("NO");
    }
}
