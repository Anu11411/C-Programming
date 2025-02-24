#include <stdio.h>
int main()
{
   int cp,sp;
   printf("Enter cost price :");
   scanf("%d",&cp);
   printf("Enter selling price :");
   scanf("%d",&sp);

   if(sp >cp){
    printf("Profit : %f %% ",(sp-cp)/(float)cp*100);
   }
   else{
    printf("Loss : %f %%",(cp-sp)/(float)cp * 100);
   }
    return 0;
}