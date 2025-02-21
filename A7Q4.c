#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
     int extract = num - (num /10 *10);
     printf(extract == 1 || extract == 3 || extract == 5 || extract == 7 || extract ==9 ? "Odd" :"Even");
    return 0;
}