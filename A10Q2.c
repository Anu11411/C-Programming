#include <stdio.h>
int main()
{
      char ch;
      printf("Enter any alphabet, digit, or special character :");
      scanf("%c",&ch);

      if((int)ch >=65 && (int)ch <=90){
        printf("Upper case alphabet.");
      }
      else if((int)ch >=97 && (int)ch <=122){
        printf("Lower case alphabet.");
      }
      else if((int)ch >=48 && (int)ch <=57)
      {
        printf("Digit.");
      }
      else{
        printf("Special character.");
      }
    return 0;
}