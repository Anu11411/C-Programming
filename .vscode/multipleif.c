#include<stdio.h>
int main(){
    int n1=2,n2=3,n3=5;
   int x;
   scanf("%d",&x);
    int count=0;
    if(x %n1==0){
      count++;
      printf("Div by 2\n");
      }
         if(x %n2==0){
      count++;
      printf("Div by 3\n");
      }
     
      if(x %n3==0){
    
      count++;
       printf("div by 5 \n");
      }
      printf(" The total number of  count  %d \n",count);
    return 0;
}