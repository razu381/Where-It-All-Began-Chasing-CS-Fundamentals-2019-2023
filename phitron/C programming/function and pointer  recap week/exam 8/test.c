#include<stdio.h>
#include<string.h>



int count_zero(char s[]){
    int size = strlen(s);
    int count = 0;
    for(int i = 0; i < size; i++){
        if(s[i] == '0'){
            count++;
        }
    }
    return count;

}

int main(){
    char s[100];
    //as string contains only 0 and 1, i assume there's no space
    scanf("%s",s);
    int count = count_zero(s);
    printf("%d",count);
}
