#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number and get the desired result\n");
    scanf(" %d %d",&a,&b);
     printf("Sum of two number is:%d\n",a+b);
      printf("Subtraction of two number is:%d\n",a-b);
       printf("Multiplication of two number is:%d\n",a*b);
    float f=(float)(a/0);
    printf("%f",f);
    return 0;
}