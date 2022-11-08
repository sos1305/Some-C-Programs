#include<cstdio>
int unique(int arr[], int n){
   
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j] && i!=j)
        count=1;
        }
        if(count==0)
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The unique elements are\n");
    unique(arr,n);
    return 0;
}
