#include<cstdio>
#include<cmath>
void main(){
    float a,b,c,d,s,area;
    printf("Enter the first side of triangle: ");
    scanf("%f",&a);
    printf("Enter the second side of triangle: ");
    scanf("%f",&b);
    printf("Enter the third side of triangle: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    d=s*(s-a)*(s-b)*(s-c);
    area=sqrt(d);
    printf("The area of the triangle is %f",area);
}
