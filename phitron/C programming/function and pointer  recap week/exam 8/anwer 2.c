#include<stdio.h>

float make_average(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    printf("sum = %d \n",sum);
    float average = (float)sum / size;
    return average;
}



int main(){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);
    float avg = make_average(array,size);

    printf("%f",avg);

}

