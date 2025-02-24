#include <stdio.h>
int main()
{
     int dsa,os,sd,cn,sql;
     printf("Enter mark of DSA ,OS,SD,CN,SQL :");
     scanf("%d %d %d %d %d",&dsa,&os,&sd,&cn,&sql);
     if( 33 >dsa){
        printf("Fail!");
     }
     else if( 33 >os){
        printf("Fail !");
     }
     else if(33 >sd){

        printf("Fail !");
     }
     else if(33 > cn){
        printf("Fail !");
     }
     else if(33 >sql){
        printf("Fail !");
     }
     else{
        printf("Hurray you're pass!");
     }
    
    return 0;
}