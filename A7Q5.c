#include <stdio.h>
int main()
{
      int num;
      printf("Enter a number :");
      scanf("%d",&num);
      printf(num & 1 == 1? "Odd":"Even");
    return 0;
}