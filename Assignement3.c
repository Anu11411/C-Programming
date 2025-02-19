#include <stdio.h>
int main()
{             //Q1
            //  char ch;
            //  printf("Enter charachter :");
            //  scanf("%c",&ch);
            //  printf("Ascii code of %c is %d",ch,(int)ch);

            //Q2
            // int n;
            // printf("Enter a number :");
            // scanf("%d",&n);
            // printf("Ascii code  is %c",(char)n);


            //Q3

            // char ch1,ch2,ch3;
            //  printf("Enter three characters :");
            //  scanf("%c %c %c",&ch1,&ch2,&ch3);
            //  printf("%c -> %d \n %c -> %d \n %c -> %d",ch1,(int)ch1,ch2,(int)ch2,ch3,(int)ch3);

            //Q4

            // int number;
            // printf("Enter number :");
            // scanf("%d",&number);
            // printf("Last digit of %d is %d",number,number%10);

            //Q5
            int number;
            printf("Enter number :");
            scanf("%d",&number);
            int extract;
            extract = number ;
            number = number /10;
            printf("Number without its last digit %d is %d",extract,number);
    return 0;
}