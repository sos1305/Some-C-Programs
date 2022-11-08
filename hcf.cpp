#include<cstdio>
int main(){
    int a,b,h;
    printf("Enter two numbers to find their HCF \n");
     printf("Enter first number\n");  
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    h = a<b?a:b;
    while(h>=1){
        if(a%h==0 && b%h==0){
            break;
            h--;
        }
    }
    printf("The HCF of %d and %d is %d",a,b,h);
    return 0;
}
