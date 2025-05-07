#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n;i++){
        int g;
        scanf("%d",&g);
        if(g > 38)
        {
            int mod_g = g;
            while(mod_g % 5 != 0){
                mod_g++;
            }
            if(mod_g - g < 3){
                printf("%d \n",mod_g);
            }
            else
            {
                printf("%d \n",g);
            }
        }
        else
        {
            printf("%d \n",g);
        }

    }//end of foor loop
}
