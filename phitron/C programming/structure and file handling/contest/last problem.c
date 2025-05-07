
#include<stdio.h>
#include<string.h>

struct name{
    char s[20];
    char t[20];
};



int main(){
    int n;
    scanf("%d",&n);
    struct name names[n];
    struct name unique[n];
    for(int i = 0; i < n ;i++){
        scanf("%s %s",names[i].s,names[i].t);
    }
    //counter of unique array
    int k;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(strcmp(names[i].s,unique[j].s) == 0 && strcmp(names[i].t,unique[j].t) == 0){
                printf("YES");
                return 0;
            }

    }
    strcpy(unique[k].s ,names[i].s);
    strcpy(unique[k].t ,names[i].t);
    k++;
    }
    printf("NO");

}
