#include<cstdio>
int deleteElement(int arr[], int n, int number){
    int index=0;
    for(int i=0;i<n;i++){
        if(number==arr[i])
        index=i;
        break;
    }
    for(int i=index;i<n-1;i++){
        arr[index]=arr[index+1];
        index++;
    }
    arr[n-1]=0;
}
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int num;
    printf("Enter the number you want to delete\n");
    scanf("%d",&num);
    deleteElement(arr,n,num);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
