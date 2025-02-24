#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if((num % 2 ==0) && (num % 3==0))
    {
        printf("Divisible by both.");
    }
    else{
        printf("Not divisible by both.");
    }
    return 0;
}