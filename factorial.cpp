#include <cstdio>
int main()
{
    int a;
    long long int fact = 1;
    printf("Enter a no. to print its factorial\n");
    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
        fact *= b;
    }
    printf("%d!  =  %lld", a, fact);
    return 0;
}
