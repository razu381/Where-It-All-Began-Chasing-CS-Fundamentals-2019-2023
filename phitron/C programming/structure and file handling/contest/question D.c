#include<stdio.h>


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
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n ;i++){
            scanf("%d",&a[i]);
        }
        sort(a,n);
//        for(int i = 0; i < n; i++){
//            printf("%d ",a[i]);
//        }

        int min = a[(n -1)] - a[(n-2)];

        for(int i = n - 2; i > 0; i--){
            if(a[i] - a[i - 1] < min){
                min = a[i] - a[i - 1];
            }
        }
        printf("%d \n",min);
    }


}
