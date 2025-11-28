/*
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element is: %d\n", secondLargest);
    }

    return 0;
}
    */
   
#include <stdio.h>

int main() 
{
    int n, i, j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int result[n];  
    for (i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            result[j++] = arr[i];
        }
    }
    while (j < n) 
    {
        result[j++] = 0;
    }
    printf("Array after moving non-zero elements to front:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }
    return 0;
}


















