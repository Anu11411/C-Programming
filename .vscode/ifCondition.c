#include<stdio.h>
int main(){
    int totalMarks=100;
    int x;
   
    scanf("%d",&x);
    if((x>=70) && (x<=100) )
        printf("Student have A Grade");
    
    if((x>=40) && (x<70))   
        printf("Student have B Grade");

    
    if(x<40 && x>=0)
        printf("Student secure C grade");
    if(x<0)
    printf("not applicable");
    return 0;
}