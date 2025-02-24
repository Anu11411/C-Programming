#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    if( a >b ){
        printf("%d is greater than %d ",a,b);
    }
    else if (a == b){
        printf("Both are same.");
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    return 0;
}