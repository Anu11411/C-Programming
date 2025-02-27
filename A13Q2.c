#include <stdio.h>
int main()
{
     int num ,n =2,sum=0;
     printf("Enter num :");
     scanf("%d",&num);

    for(int i = 2 ; i <= num; i=i+2){
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}