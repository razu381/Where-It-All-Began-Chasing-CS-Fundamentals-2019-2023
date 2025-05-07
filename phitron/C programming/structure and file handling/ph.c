#include<stdio.h>
#include<string.h>


int main(){
    FILE *inputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile == NULL){
        fprintf(inputFile,"File not found");
    }
    FILE *outputFile;
    outputFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a;
        fscanf(inputFile,"%d",&a);
        sum += a;
    }
    fprintf(outputFile,"sum = %d",sum);
}
