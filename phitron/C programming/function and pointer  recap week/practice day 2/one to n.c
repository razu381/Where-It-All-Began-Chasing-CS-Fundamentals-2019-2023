#include<stdio.h>
#include<string.h>

int oneToN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",oneToN(n));

}
