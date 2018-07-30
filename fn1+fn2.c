/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int num1,num2,r1=0,r2=0;
scanf("%d",&num1);
scanf("%d",&num2);
while(num1>0)
{
    r1=num1%10;
 
    num1=num1/10;
}
  printf("\nfirst digit of given number is :%d ",r1);
while(num2>0)
{
    r2=num2%10;
    num2=num2/10;
}
printf("\nfirst digit of given number is:%d",r2);

printf("\nSum of the first digits of N1 and N2 is :%d",r1+r2);
    return 0;
}
