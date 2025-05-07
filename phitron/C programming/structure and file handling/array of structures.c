#include<stdio.h>
#include<string.h>


struct students{
    char name[100];
    int roll;
    int marks;
};

void print_struct(struct students a){
    printf("%s %d %d \n",a.name,a.roll,a.marks);
}

int main(){
    struct students a[2];
    for(int i = 0; i < 2; i++){
        scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);
    }
    for(int i=0; i < 2; i++){
        print_struct(a[i]);
    }
}
