#include <stdio.h>
int main()
{
    int last ,end = 2;
    printf("enter Last number :");
    scanf("%d",&last);
    while(last >= end){
        printf("%d\n",last);
        last = last -2;
    }
    return 0;
}