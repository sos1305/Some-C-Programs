#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void arrayRotation(int arr[], int n)
{
    int temp;
    temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

int main()
{
    vector<int>v={1,2,3,4,5};
    int n;
    cout << "Enter the number of times you want to rotate the array: ";
    cin >> n;
    n = n % v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+n); //5,4,3,2,1 ->4,5,3,2,1
    reverse(v.begin()+n,v.end()); //4,5,3,2,1 ->4,5,1,2,3
    for(int i:v){
        cout<<i<<" ";
    }

    // int arr[] = {1, 2, 3, 4, 5};
    // int n;
    // cout << "Enter the number of times you want to rotate the array: ";
    // cin >> n;
    // n = n % (sizeof(arr) / sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     arrayRotation(arr, 5);
    // }
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
