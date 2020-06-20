#include <stdio.h>

void rotate(int arr[], int n)
{
   int x = arr[n-1], i;
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
   arr[0] = x;
}

int main()
{
    int arr[10], n, k, i, j;

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the no. of times to rotate: ");
    scanf("%d", &k);

    for(j = 0; j < k; j++)
    {
        rotate(arr, n);
    }

    for (i = 0; i < n; i++)
        printf("Element at index %d: %d\n", i+1, arr[i]);
    return 0;
}
