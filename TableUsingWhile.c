#include<stdio.h>
int main(){
    int i ,num,table;
    printf("Enter a number whose table you want to print out : \n");
    scanf("%d",&num);
     while(i < 11){
         table = num * i ;
        printf("num %d * i%d  = table %d",num,i,table);
         i++;
 } 
    return 0;
}