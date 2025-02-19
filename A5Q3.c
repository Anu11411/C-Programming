#include <stdio.h>
int main()
{
    int a = 4;
    float b = 45.45;
    char ch = 'A';
    double d = 23.4242;
    printf("Size of int a -> %d \nSize of float b -> %d \nSize of char %d \nSize of double %d",sizeof(a),sizeof(b),sizeof(ch),sizeof(d));
    return 0;
}