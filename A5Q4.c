#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int extractDigit;
    a = (a /10)*10;
    printf("a :%d",a);
    return 0;
}