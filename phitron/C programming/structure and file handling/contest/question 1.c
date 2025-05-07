#include<stdio.h>
#include<stdbool.h>
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
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i = 0; i < n ;i++){
        scanf("%d",&a[i]);
    }
    //sort the array form smallest to highst

    sort(a,n);
//    for(int i = 0; i < n ;i++){
//        printf("%d ",a[i]);
//    }

    //add negative numbers from the array
    int counter = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(counter == m){
            break;
        }else{
            if( a[i] < 0){
                sum += a[i];
                counter++;
            }
        }
    }
    printf("%d",sum * -1);



}
