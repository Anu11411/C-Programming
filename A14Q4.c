//Write a program to calculate LCM of two numbers

#include <stdio.h>
int main()
{

   int a,b;
   printf("Enter any two number : ");
   scanf("%d %d",&a,&b);
 
   for(int i = 1 ; i< a*b ; i++){
       if(i % a == 0 && i % b==0){
        printf("Lcm of %d , %d is %d",a,b,i);
        break;
       }
   }
    

    return 0;
}