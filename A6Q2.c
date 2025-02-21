#include <stdio.h>
int main()
{
       int num;
       printf("Enter a three digit number :");
       scanf("%d",&num);
       int extract = num % 10;
       num = num / 10;
       printf("Rotated number by one place is %d", extract * 100 + num);

    return 0;
}
