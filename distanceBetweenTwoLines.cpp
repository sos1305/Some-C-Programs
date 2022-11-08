#include<cstdio>
#include<cmath>
int main()
{
    int x1,y1,x2,y2;
    float a,d;
    printf("Enter the val of x1:");
    scanf("%d",&x1);
    printf("Enter the val of x2:");
    scanf("%d",&x2);
    printf("Enter the val of y1:");
    scanf("%d",&y1);
    printf("Enter the val of y2:");
    scanf("%d",&y2);
    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    d=sqrt(a);
    printf("The distance between two lines is %f",d);
    return 0;
}