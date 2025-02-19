#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
   int size = sizeof(ch);
   printf("Size of character %d",size);
    return 0;
}