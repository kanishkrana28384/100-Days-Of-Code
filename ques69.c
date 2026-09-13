//Q69: Find the second largest element in an array.

#include<stdio.h>
int main()
{
    int n, i, first, second;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if(n < 2)
    {
        printf("Array must have at least two elements.\n");
        return 0;
    }
    
    first = second = -2147483648; // Initialize to minimum integer value
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    
    if(second == -2147483648)
    {
        printf("There is no second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n", second);
    }
    
    return 0;
}