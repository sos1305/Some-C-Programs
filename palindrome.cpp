#include<cstdio>
int palindrome(int);
int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    b=palindrome(a);
    if(b==1)
    printf(" The entered number is a Palindrome number");
    else
    printf("The entered number is not a palindrome number");
    return 0;
}
int palindrome(int no){
    int remainder,sum=0,temp;
    temp=no;
    while(no>0){
        remainder=no%10;
        sum=sum*10+remainder;
        no=no/10;
    }
    no=temp;
    if(sum==no)
    return 1;
    else
    return 0;
}

