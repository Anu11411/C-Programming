#include <stdio.h>
int main()
{
      float a,b,c;
      printf("Enter length of the sides of triangle a,b,c :");
      scanf("%d %d %d",&a,&b,&c);

    if(a+b > c){
        if(a+c > b){
            if(b+c>a){
                printf("It is a triangle.");
            }
        }
    }
    else{
        printf("It is not a triangle.");
    }
    return 0;
}