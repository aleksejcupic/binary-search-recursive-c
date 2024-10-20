// C program to implement recursive Binary Search
#include <stdio.h>
#include <stdlib.h>

// A recursive function to return the location of 'x' in a given array
int binarySearch(int arr[], int left, int right, int x){
    if (right >= left){
        int mid = left + (right - 1) / 2;

        // If the element is at mid, return it
        if (arr[mid] == x)
            return mid;

        // If element is smaller, left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        // If element is larger, right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // If element not found
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
     (result == -1) ? printf("Element is not present in array")
                    : printf("Element is present at index %d\n", result);

    return 0;
}