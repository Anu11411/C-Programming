#include<stdio.h>
int main(){
    int marks;
    scanf("%d ",&marks);
    if(marks >70){
        printf("Grade A\n");
    }
   else if(marks > 40){
        printf("Grade B \n");
    } 
    else if(marks >20){
        printf("Grade C \n");
    }
    else{
        printf("Grade D \n");
    }
    return 0;
}