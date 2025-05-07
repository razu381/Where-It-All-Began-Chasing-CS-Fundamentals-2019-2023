#include <stdio.h>

int main(){
    int n;
    int room = 0;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        int p,q;
        scanf("%d %d",&p,&q);

        if(q - p >= 2){
            room += 1;
        }
    }
    printf("%d",room);
}
