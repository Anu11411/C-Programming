#include<stdio.h>
#include<limits.h>
int main(){
 int y,z;
 y=INT_MIN,z=INT_MAX;
 printf("%d %d\n",y,z);
 long long a=100000000000000000;
 printf("%lld\n",a);

 printf("%d %d %d",sizeof(int),sizeof(long),sizeof(long long));
  return 0;
}