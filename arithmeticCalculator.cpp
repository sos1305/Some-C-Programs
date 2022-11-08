#include<cstdio>
void main()
{
    float x,y,sum,difference,product,division;
    printf("Enter the 1st no.");
    scanf("%f",&x);
    printf("Enter the 2nd no.");
    scanf("%f",&y);
    sum=x+y;
    product=x*y;
    difference=x-y;
    division=x/y;
   printf("The sum of both numbers is %f",sum);
   printf("The difference of both numbers is %f", difference);
   printf("The product of both number is %f",product);
   printf("The division of both numbers is %f",division);
}