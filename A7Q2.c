#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf(num % 5 == 0 ? "divisible" : "not divisible");
    return 0;
}