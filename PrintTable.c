#include<stdio.h>
int main(){
int num , mul;
printf("Enter a number : \n");
scanf("%d",&num);
    int i ;
    for(i =1; i<=10; i++){
     mul= num * i; 
       printf("%d * %d = %d \n", num,i,mul);
    }
 return 0;
}