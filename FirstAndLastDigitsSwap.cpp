#include<cstdio>

int main()
{
    int x,a,b,x1=0,c=1;
    printf("Enter a Number : ");
    scanf("%d",&x);
    x1=x;
    a=x%10;
    while (x1!=0)
    {
        b=x1%10;
        x1/=10;
        c*=10;
    }
    printf("first digit is %d and last digit is %d \n",b,a);
    printf("Swapping the first and last digits....\n");
    x= x-a +b;
    x= ((x-(b-a)*c/10));
    printf("New Number : %d",x);
    return 0;
}