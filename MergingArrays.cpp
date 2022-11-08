#include<cstdio>
int mergeTwoArray(int arr1[], int n1, int arr2[], int n2){
    int newArr[n1+n2];
    int temp=n1;
    for(int i=0;i<n1;i++){
        newArr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        newArr[temp]=arr2[i];
        temp++;
    }
    printf("The merged arrays now are\n");
    for(int i=0;i<(n1+n2);i++){
        printf("%d ",newArr[i]);
    }
}
int main(){
    int n1,n2;
    printf("Enter the size of both the arrays\n");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("Enter the values of 1st array\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the values of 2nd array\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    mergeTwoArray(arr1,n1,arr2,n2);
    return 0;
}
