#include<stdio.h>
int main(){
    int a=15, b=10, c=5,d=19;
    int e=!((a>=b && b>=c)||(d!=a));
    printf("%d \n",e);
    return 0;
}