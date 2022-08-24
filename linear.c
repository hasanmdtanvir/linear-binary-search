#include <stdio.h>
int main()
{

    int linearSearch(int a[], int n, int searchingValue)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == searchingValue)
            {
                return i + 1;
            }
        }
        return -1;
    }

    int arr[] = {2, 5, 4, 9, 66, 33, 99, 14, 54, 87};
    int searchingValue = 14;
    int n = sizeof(arr) / sizeof(int);
    int result = linearSearch(arr, n, searchingValue);
    if (result == -1)
    {
        printf("Element is not found in the array");
    }
    else
    {
        printf("Element is found at %d position of the array", result);
    }
}