#include <stdio.h>
int main()
{
    int n =1 , num;
    printf("Enter number :");
    scanf("%d",&num);

    while(  n != 11){
        printf(" %d * %d = %d \n",num,n, num*n);
        n++;
    }
    return 0;
}