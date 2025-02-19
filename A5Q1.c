#include <stdio.h>
int main()
{
    int a;
    printf("Enter three digit number :");
    scanf("%d",&a);
    int sum = 0;
    int extractDigit ;
    extractDigit =  a % 10;
    sum = sum + extractDigit;
     a = a/10; 
     extractDigit = a % 10;
     sum = sum + extractDigit;
     a = a /10;
     extractDigit = a%10 ;
     sum = sum + extractDigit;
     printf("Sum  is : %d ",sum);
    return 0;
}