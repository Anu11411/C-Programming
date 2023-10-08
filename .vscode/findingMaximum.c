#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
             if((x >= y) && (x>=z) ){
               printf("x is greater th  an among two");
                                }
             else if((y>=x)&&(y>=z) ){
               printf("y is greater than among two");
                                     }
            else if((z>=x)&&(z>=y) ){
               printf("z is greater than among two");
                                    }
            return 0;
           }