#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num % 7 ==0 ){
        printf("Divisible by 7");
      }
        else if(num % 3 == 0){
            printf("divisible by 3");
        }
    else{
        printf("Not divisible by both.");
    }
    return 0;
}