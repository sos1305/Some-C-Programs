#include<cstdio>
int main()
{
    int c,o1,o2,o3,sum=0;
    int b=1;
    long int a;
    printf("Enter a Binary Number:");
    scanf("%ld",&a);
    while (a>0)
    {
        c=a%1000;
        o1=c%10;
        o2=(c%100-o1)/10;
        o3=(c-(o2+o1))/100;
        o2*=2;
        o3*=4;
        sum=sum+((o1+o2+o3)*b);
        a/=1000;
        b=b*10;
    }
    printf("Octal Number is : %d",sum);
    return 0;
}
