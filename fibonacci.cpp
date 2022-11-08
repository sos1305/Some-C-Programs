#include <cstdio>
// void fib(int);
void fibrec(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter 1st two terms\n");
    scanf("%d %d", &a, &b);
    printf("Enter the limit\n");
    scanf("%d", &c);
    printf("The fibonacci series is\n");
    printf("%d %d ", a, b);
    fibrec(a, b, c);
    return 0;
}
// void fib(int num){
//     int i,a=0,b=1,sum=a+b;
//         printf("1 1 ");
//     for(i=3;i<=num;i++){
//         a=b;
//         b=sum;
//         sum=a+b;
//         printf("%d ",sum);

//     }
// }

void fibrec(int first, int second, int num)
{
    int sum;
    if (num > 0)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%d ", sum);
        fibrec(first, second, num - 1);
    }
}