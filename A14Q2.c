#include <stdio.h>
int main()
{
    int num,count = 0,extract,original;
    printf("Enter a number :");
    scanf("%d",&num);
     original = num;
    while(num != 0){
        extract = num %10;
        num = num /10;
        count = count +1;
    }
    printf("Number of digits in a %d is %d",original,count);

    return 0;
}
