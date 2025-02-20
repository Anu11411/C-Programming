#include <stdio.h>
int main()
{
           float inr;
           printf("Enter amount in INR :");
           scanf("%f",&inr);
           printf("%0.2f in USD is %0.2f",inr,1/84.23 * inr);
    return 0;
}