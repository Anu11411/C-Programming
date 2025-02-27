#include <stdio.h>
int main()
{
   int last ,n = 1;
    printf("Enter last number :");
    scanf("%d",&last);

    while(last >= n){
        printf("%d\n",n*n);
        n++;
    }
    return 0;
}