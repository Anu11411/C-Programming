#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z );
    if(x>0){
        printf("Hii \n");
        if(y>z){
            printf("HEllo \n");
               }
    else{
        printf("HOla \n");
        }
           }
    else{
        if(z>0){
               printf("cow \n");
               }
        else if(y>0){
                     if(x+y>z){
                               printf("Deer \n");
                               }
                     else{
                           printf("Buffalo \n");
                          }
                      }
        else{
             printf("Beer \n");
            }
        }
    
    return 0;
}