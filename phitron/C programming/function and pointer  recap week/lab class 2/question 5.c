#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check_array(int arr[],int n){
    //frequency counter
    int counter[n];
    memset(counter,0,sizeof(counter));
    //counter array
    for(int i = 0; i < n; i++){
        counter[arr[i]]++;
    }
    //check the array
    for(int i = 1;  i <=n ; i++){
        if(counter[i] == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    bool res = check_array(arr,n);
    printf("%s", res ? "true" : "false");

}
