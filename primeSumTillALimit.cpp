#include<cstdio>
int main()
{
    int i, j, primeis, sum = 0;
    long int e;
    printf("enter the value till you want the sum of prime numbers\n");
    scanf("%ld",&e);

    printf("sum of all prime numbers till %ld is : ",e);
   
    for(i=2; i<=e; i++)
    {
       
        primeis = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
               
                primeis= 0;
                break;
            }
        }
       
        if(primeis==1)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}