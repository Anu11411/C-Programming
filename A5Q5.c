#include <stdio.h>
int main()
{
    int num ,digit;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Enter digit :");
    scanf("%d",&digit);
    num = (num * 10)+ digit;
    printf("%d ",num);
    return 0;
}