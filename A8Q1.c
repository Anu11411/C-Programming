#include <stdio.h>
int main()
{
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   int count = 0;


   if(num >=100 && num <=999){
       printf("three digit number .");
   } 
   
   
   else {
    printf(" Not Three digit number .");
   }
}