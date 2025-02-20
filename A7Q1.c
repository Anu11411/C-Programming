#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf(num <=0 ? "non positive ": " positive" );
    return 0;
}