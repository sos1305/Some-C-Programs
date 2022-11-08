#include<cstdio>
int natural(int);
int main(){
    int a,b;
    printf("Enter the value till you want to print the sum of natural numbers\n");
    scanf("%d",&a);
    b=natural(a);
    printf("sum=%d",b);

    return 0;
}
int natural(int a){
    if(a==1)
    return 1;
    else
    return a+natural(a-1);
}