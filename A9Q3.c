#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet :");
    scanf("%c",&ch);

    if((int)ch >=65 && (int)ch <= 90){
    printf("%c is in uppercase",ch);
    }
    else{
        printf("%c is in lowercase",ch);
    }
    return 0;
}