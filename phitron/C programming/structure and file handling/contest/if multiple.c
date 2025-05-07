//Take an array name ar[] of size N where the values will be unique. Also take another integer value named mul as input. Print “YES” if you can make  mul by multiplying two different values from that array. Otherwise, print “NO”. Here, (0 < N <= 100 and 0 <= ar[i] <= N and 0 <= mul <= 10000)



#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int mul;
    scanf("%d",&mul);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] != arr[j]){
                if(arr[i] * arr[j] == mul){
                    printf("Yes");
                    return 0;
                }
            }
        }
    }
    printf("No");
}
