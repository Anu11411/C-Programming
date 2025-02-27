#include <stdio.h>
int main()
{
      int last, n = 2;
      printf("Enter last number :");
      scanf("%d",&last);

      while(last >= n){
        printf("%d\n",n);
            n= n+2;
      }
    return 0;
}