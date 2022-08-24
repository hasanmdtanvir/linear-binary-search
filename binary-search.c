#include <stdio.h>
int main()
{
    int binarySearch(int a[], int n, int searchingValue)
    {
        int left, right, mid;
        left = 0;
        right = n - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (a[mid] == searchingValue)
            {
                return mid + 1;
            }
            else if (a[mid] < searchingValue)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }

    int arr[] = {2, 5, 7, 9, 12, 33, 40, 45, 60, 87};
    int searchingValue = 45;
    int n = sizeof(arr) / sizeof(int);
    int result = binarySearch(arr, n, searchingValue);
    if (result == -1)
    {
        printf("Element is not found in the array");
    }
    else
    {
        printf("Element is found at %d position of the array", result);
    }
}