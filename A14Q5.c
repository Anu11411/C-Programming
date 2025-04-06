//Write a program to reverse a given number

#include <stdio.h>
#include <math.h>
int main()
{
    int num,original,extractDigit,extractDigit1;
    int count =0;
    double reverse=0;
    printf("Enter a number :");
    scanf("%d",&num);
     original = num;
               while(num != 0){ 
              extractDigit = num %10;
              num = num /10;
              count = count +1;
    }
    
                while(original !=0){
           extractDigit1 = original %10;
           reverse =reverse+ extractDigit1 * pow(10,count-1);
           original = original /10;
           if(original == 0)
           break;
           count--;
           
        }
    
    printf("Reverse of number is %d",(int)reverse);
           
    return 0;
}