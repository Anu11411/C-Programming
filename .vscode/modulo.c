#include<stdio.h>
int main(){
    int x,y;
    printf("Please Enter The Number That you want to get remainder and quotient:");
    scanf("%d %d",&x,&y);
    int q=x/y;
    int r=x-(y*q);
    printf("%d",r);
    return 0;
}