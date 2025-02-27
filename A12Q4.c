#include <stdio.h>
int main()
{
    int start = 1;
    int num;
    printf("Enter num :");
    scanf("%d",&num);

    while( num >= start)
    {

        printf("%d\n",start);
        start = start +2;
    }
    return 0;
}