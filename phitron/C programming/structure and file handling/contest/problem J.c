#include<stdio.h>
#include<string.h>

//sort array function
void sort(int a[],int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main(){
    char s[101];
    scanf("%s",s);
    int len = strlen(s);
    int num_len = len / 2 + 1;
    int nums[num_len];
    for(int i = 0, j = 0; i < len; j++,i += 2){
        nums[j] = s[i] - '0';
    }
    sort(nums,num_len);
    for(int i = 0; i < num_len; i++){
        printf("%d", nums[i]);
        if(i != num_len - 1){
            printf("+");
        }

    }

}
