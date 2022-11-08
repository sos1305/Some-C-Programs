#include<cstdio>
#include<cmath>
int main(){
    int a,b,c,d,e,count=0,sum=0;
    printf("Enter a number to reverse it\n");
    scanf("%d",&a);
    b=a;
    d=a;
    while(b>0){
        b=b/10;
        count++;
    }
    c=pow(10,count-1);
    while(d>0){
        e=d%10;
        sum=sum+(e*c);
        c/=10;
        d/=10;
    }
    printf("%d after reversing=%d",a,sum);
    return 0;
}
