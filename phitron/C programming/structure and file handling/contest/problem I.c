#include<stdio.h>
#include<string.h>


int main(){

    int n;
    scanf("%d",&n);
    struct name{
        char family[20];
        char given[20];
    }

    struct name names[n];
    struct name unique_names[n];
    int num_of_unique = 0;
    for(int i = 0; i < n ;i++){
        scanf("%s %s", &names[i].family,&names[i].given);
        for(int j = 0; j < num_of_unique; j++){
            if(names.)
        }
    }

}
