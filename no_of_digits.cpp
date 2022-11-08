#include<cstdio>

int main(){
    long long int a,b,c,d=1;
    printf("Enter a number\n");
    scanf("%lld",&a);
    c=a;
    while (a>=10){
    a/=10;
    d++;
    }
    printf("%lld is a %lld digit number",c,d);
    return 0;
}
