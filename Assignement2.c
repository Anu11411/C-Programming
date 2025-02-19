#include <stdio.h>
int main()
{
    //Q1
    // int a,b,c;
    // printf("Enter three numbers :");
    // scanf("%d %d %d",&a,&b,&c);
    // printf("Average of %d,%d and %d is %d ",a,b,c,(a+b+c)/3);

    // //Q2
    // float r;
    // printf("Enter the radius :");
    // scanf("%f",&r);
    // printf("Circumference of circle with radius %f is %f ",r,2*3.14*r);

    //Q3
    // int principal,rate,time;
    // printf("Enter principal , rate of interest, and time :");
    // scanf("%d %d %d",&principal,&rate,&time);
    // printf("Simple intrest with principal %d , rate of intrest %d and time %d is %d",principal,rate,time,(principal * rate * time)/100);
    
    //Q4
    // int l,b,h;
    // printf("Enter length, breadth , height of cuboid :");
    // scanf("%d %d %d",&l,&b,&h);
    // printf("Volume of cuboid  having length %d , breadth %d and height %d is %d cubic unit",l,b,h,(l*b*h));
    
    //Q5
    int costprice,sellingPrice;
    printf("Enter cost price and selling price ");
    scanf("%d %d",&costprice,&sellingPrice);
     if(costprice > sellingPrice)
     {
        printf("Loss");
     }
     else{
        printf("Profit");
     }
    
    return 0;
    
}