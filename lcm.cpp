#include<cstdio>

int main(){
    int a,b,c;
    printf("Enter two numbers to find their LCM \n");
     printf("Enter first number\n");  
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    for(c=a>b?a:b;c<a*b;c++){
        if(c%a==0&&c%b==0){
            break;
        }

    }
    printf("The LCM of %d and %d is %d",a,b,c);
    return 0;
}
