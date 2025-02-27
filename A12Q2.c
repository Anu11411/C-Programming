#include <stdio.h>
int main()
{
    int n, start = 1;
    printf("Enter n :");
    scanf("%d",&n);
     
    while( start <= n){
        printf("%d\n",start);
        start++;
    }
    return 0;
}