


void change_array(int arr[],int n, int rev_arr[]){
    for(int i = 0, j = n - 1; i < n; i++,j--){
        rev_arr[i] = arr[j];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rev_arr[size];
    change_array(arr,size,rev_arr);

    for(int i = 0; i < size; i++){
        printf("%d ",rev_arr[i]);
    }

}

