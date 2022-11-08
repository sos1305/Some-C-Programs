#include<cstdio>

int main(){
    int a,b,c=0;
    printf("Enter a no. to check whether it is prime or not\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(a%b==0){
            c++;
        }
    }
    if(c==2){
        printf("%d is a prime number\n",a);
    }else{
        printf("%d is not a prime number\n",a);
    }
    return 0;
}
