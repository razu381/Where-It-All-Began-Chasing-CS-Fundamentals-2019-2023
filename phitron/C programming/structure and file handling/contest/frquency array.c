#include<stdio.h>
#include<string.h>

int main(){
    int n , max;    printf("Enter the number of Elements & max num: ");
    scanf("%d %d",&n,&max);

    int arr[n];

    for(int  i = 0; i < n ;i++){
        scanf("%d",&arr[i]);
    }

    int count[max+1];
    memset(count,0, (max+1) * sizeof(count[0]));
    for(int i = 0; i < n; i++){
        int pos = arr[i];
        count[pos]++;
    }

    for(int i = 0; i < max+1; i++){
        printf("%d ",count[i]);
    }
}
