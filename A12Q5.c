#include <stdio.h>
int main()
{

   int last , start = 1;
   printf("Enter last  odd number :");
   scanf("%d",&last);
   while(start <= last){

    printf("%d\n",last);
    last = last -2;
   }
    return 0;
}