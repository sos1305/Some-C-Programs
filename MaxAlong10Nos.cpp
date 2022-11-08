#include <cstdio>
int main()
{
    int i, a[10];
    printf("Enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
            printf("%d is negative", a[i]);
        else if (a[i] == 0)
            printf("%d is zero", a[i]);
        else
            printf("%d is positive", a[i]);
    }
    return 0;
}
