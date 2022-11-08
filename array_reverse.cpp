#include<cstdio>
void reverse(int *ptr,int num){
    int temp;
    for(int i=0;i<(num/2);i++){
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+num-i-1);
        *(ptr+num-i-1)=temp;
    }
    printf("The reversed array is\n"); 
    for(int i=0;i<num;i++){
        printf("%d ",*(ptr+i));
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
    reverse(arr,n);
    return 0;
}
