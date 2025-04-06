#include <stdio.h>
int main()
{
    int num ,count =0;
    printf("Enter a number :");
    scanf("%d",&num);

    for(int i = 1; i <= num ; i++){
        if( num % i == 0){
            count = count +1;
        }
    }
    if(count >=3){
        printf("%d is not prime ",num);
    }
    else{
        printf("%d is  prime ",num);
    }
    return 0;
}