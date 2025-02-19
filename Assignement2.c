#include <stdio.h>
int main()
{
    //Q1
    // int a,b,c;
    // printf("Enter three numbers :");
    // scanf("%d %d %d",&a,&b,&c);
    // printf("Average of %d,%d and %d is %f ",a,b,c,(a+b+c)/3.0);

    // //Q2
    // int r;
    // printf("Enter the radius :");
    // scanf("%d",&r);
    // printf("Circumference of circle with radius %d is %0.2f ",r,2*3.14*r);

    //Q3
    // int principal,rate,time;
    // printf("Enter principal , rate of interest, and time :");
    // scanf("%d%d%d",&principal,&rate,&time);
    // printf("Simple intrest with principal %d , rate of intrest %d and time %d is %f",principal,rate,time,principal * rate * time/100.0);
    
    //Q4
    // int l,b,h;
    // printf("Enter length, breadth , height of cuboid :");
    // scanf("%d%d%d",&l,&b,&h);
    //printf("\n");
    // printf("Volume of cuboid  having length %d , breadth %d and height %d is %d cubic unit",l,b,h,(l*b*h));
    
    //Q5
    float costprice,sellingPrice;
    printf("Enter cost price and selling price of one dozon of bananas ");
    scanf("%f%f",&costprice,&sellingPrice);
     printf("Profit or Loss ",(sellingPrice - costPrice)/12 *25);
     
    
    return 0;
    
}
