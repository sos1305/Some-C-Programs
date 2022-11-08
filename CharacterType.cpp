#include<cstdio>
int main(){
    char x;
    printf("Enter a character\n");
    scanf("%c",&x);
    if(x>=65 && x<=90){
        printf("Capital Letter");
    }
    else if(x>=97 && x<=122){
        printf("Small Letter");

    }
    else if(x>=48 && x<=57){
        printf("Numeric Character");
    }
    else
    printf("Special character");
    return 0;
}
