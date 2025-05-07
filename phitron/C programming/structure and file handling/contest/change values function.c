//Write a function named change_values() which will take an array of integers ar[], the size of the array N, and two more integer values L and R. You need to change all the values of the array between L-th index and R-th index to 0. Print the array in the  main() function. Here, (0 <= L,R < N  and 0 < N <=100000 and 0 <= ar[i] <= N)

#include<stdio.h>

void change_values(int ar[],int n,int l,int r){
    for(int i = l; i <= r; i++){
        ar[i] = 0;
    }
}

int main(){
    int n,l,r;
    scanf("%d %d %d",&n,&l,&r);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }

    change_values(ar,n,l,r);

    for(int i = 0; i < n; i++){
        printf("%d ",ar[i]);
    }

}
