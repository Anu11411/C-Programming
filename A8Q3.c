#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter roots of quadratic  equation :");
    scanf("%f %f %f",&a,&b,&c);

    if((b*b - 4 *a*c ) > 0 ){
        printf("Real and distinct root.");
    }
    
    else if(( b*b - 4 *a*c ) == 0){
        printf("Real and equal root.");
    }
    else{
        printf("Imaginary root");
    }
    
    return 0;
}