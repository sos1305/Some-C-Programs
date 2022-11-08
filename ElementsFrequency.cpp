#include<cstdio>
int frequencyInArray(int arr[], int n)
{
    int skipindex[n]; //making an array for number of elements
    for (int i = 0; i < n; i++)
    {
        skipindex[i] = 0; //initializing with 0 which means element is not repeated
    }

    for (int i = 0; i < n; i++)
    {
        if (skipindex[i] == 0)  //checking if element is already checked
        {

            int counter = 0;
            for (int j = 0; j < n; j++)
            {

                if (arr[i] == arr[j])
                {
                    counter++;
                    skipindex[j] = 1; //putting 1 in skipindex array to tell that number is already counted on the index of number itself eg [2,3,1,3,5] will look like [0,0,0,1,0]
                }
            }

            printf("%d appears %d times in the array\n", arr[i], counter);
        }
    }
}

int main()
{
    int n;
    printf("enter the size of your array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    frequencyInArray(arr, n);

    return 0;
}