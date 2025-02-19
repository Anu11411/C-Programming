#include <stdio.h>
int main()
{
     int a,b;
     printf("Enter a , b :");
     scanf("%d %d ",&a,&b);
     a = a+b -(b=a);
     printf("a = %d , b = %d",a,b);
    return 0;
}