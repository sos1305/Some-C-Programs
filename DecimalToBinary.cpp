#include <cstdio>
int DecToBin(int);
int main()
{
    int a, b;
    printf("Enter a decimal no\n");
    scanf("%d", &a);
    b = DecToBin(a);
    printf("The binary eq of %d is %d", a, b);
    return 0;
}

int DecToBin(int a)
{
    if (a == 0)
        return 0;
    else
        return ((a % 2) + 10 * DecToBin(a / 2));
}
