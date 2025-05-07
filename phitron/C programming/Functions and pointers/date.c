#include<stdio.h>
#include<string.h>

//struct

struct date{
    int day;
    int month;
    int year;
};


struct date give_next_day(struct date tomorrow, int days){
   // for(int i = 0; i < days; i++){
        int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if(tomorrow.day == months[tomorrow.month - 1] && tomorrow.month == 12){
            tomorrow.day = 1;
            tomorrow.month  = 1;
            tomorrow.year++;
        }else if(tomorrow.day == months[tomorrow.month - 1]){
            tomorrow.day = 1;
            tomorrow.month++;
        }else{
            tomorrow.day++;
        }

       // }

    struct date new_date = {tomorrow.day,tomorrow.month,tomorrow.year};
    return new_date;
}


int main(){

    struct date today = {28,2 ,2022};
    //How many days
    int days;
    scanf("%d",&days);
    //gives tomorrow
    struct date tomorrow = today;
    for(int i = 0; i < days; i++){
        tomorrow = (struct date)give_next_day(tomorrow,days);

        printf("%d-%d-%d \n",tomorrow.day,tomorrow.month,tomorrow.year);
    }

}


