#include<stdio.h>

int main(){
    FILE *logFile = fopen("log.txt","w");
    FILE *inputFile = fopen("habijabi.txt","r");

    if(inputFile == NULL){
        fprintf(logFile,"File was not found \n");
        return 0;
    }else{
        fprintf(logFile,"File was present  \n");
        return 0;
    }
    return 0;
}
