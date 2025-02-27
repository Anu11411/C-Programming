#include <stdio.h>
int main()
{
    int last, n = 1;
    printf("Enter last natural number :");
    scanf("%d",&last);

    while( last >=1){
        printf("%d\n",last);
        last--;
    }
    return 0;
}