#include<cstdio>
#include <cmath>

void statistics(float, float, float, float, float);
int main()
{
    float a, b, c, d, e;
    printf("Enter 5 numbers\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    statistics(a, b, c, d, e);
    return 0;
}
void statistics(float a, float b, float c, float d, float e)
{
    float sum, avg, k, var, std;
    sum = a + b + c + d + e;
    avg = sum / 5;
    k = pow(a - avg, 2) + pow(b - avg, 2) + pow(c - avg, 2) + pow(d - avg, 2) + pow(e - avg, 2);
    var = k / 5;
    std = sqrt(var);
    printf("The sum is %f\n", sum);
    printf("The average is %f\n", avg);
    printf("The standard deviation is %f\n", std);
}