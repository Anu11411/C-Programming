#include<stdio.h>
int main(){
    int x;
 scanf(" %d ",       &x);
    if(x % 2 == 0){
        printf("Even \n");
        printf("Div by 2 \n");
    }
    else{
        printf("Odd \n");
        printf("NOt Div by 2 \n");
    }
    printf("New if else coming up... \n ");
    if(x > 50){
        printf("Running 2nd if ...");
        printf("Greater than 50\n");
    }
    else{
        printf("Running 2nd else...\n");
        printf("Smaller than or Equal to 50 \n   ");
        
    }
    return 0;
}  