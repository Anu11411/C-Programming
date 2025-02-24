#include <stdio.h>
// A year is a leap year if:
// It is divisible by 4 AND
// (It is not divisible by 100 OR it is divisible by 400).
int main(){
    int month;
    printf("Enter month number :");
    scanf("%d",&month);
    if(month == 4 ||  month == 6 || month == 9 || month == 11){
         printf("Number of days in %d month is 30",month);
    }
    else if( month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 31){
        printf("Number of days in %d month is 31 day",month);
    }
    else{
        int year;
        printf("Enter year :");
        scanf("%d",&year);
        if((year %4 == 0 && year % 100 != 0 )|| year % 400 == 0){
            printf("29 days.");
        }
        else{
            printf("28 days.");
        }
        
    }
    return 0;
}