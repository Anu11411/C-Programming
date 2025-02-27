#include <stdio.h>
int main()
{
    int num,n  = 1,sum = 0;
    printf("Enter number :");
    scanf("%d",&num);

    while( n != num){
        sum = sum + n;
     n++;
    }
    printf("%d",sum+num);
    return 0;
}