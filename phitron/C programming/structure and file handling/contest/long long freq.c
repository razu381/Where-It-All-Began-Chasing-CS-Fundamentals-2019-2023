#include<stdio.h>
#include<string.h>

int main(){
    long long n , max;    printf("Enter the number of Elements & max num: ");
    scanf("%lldd %lldd",&n,&max);

    int arr[n];

    for(long long  i = 0; i < n ;i++){
        scanf("%lld",&arr[i]);
    }

    long long count[max+1];
    memset(count,0, (max+1) * sizeof(count[0]));
    for(long long i = 0; i < n; i++){
        long long pos = arr[i];
        count[pos]++;
    }

    for(long long i = 0; i < max+1; i++){
        printf("%d ",count[i]);
    }
}

