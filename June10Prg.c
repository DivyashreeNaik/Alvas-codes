#include<stdio.h>

void main()
{
    int arr[10][10], i, j, m, n, sum = 0;

    printf("Enter M rows and N columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("The input matrix is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("The boundary elements are: ");
    for(j = 0; j < n; j++)
            printf("%d ", arr[0][j]);
    for(i = 1; i < m - 1; i++)
        for(j = 0; j < n; j++)
        {
            if(j == 0 || j == n-1)
                printf("%d ", arr[i][j]);
        }
    for(j = 0; j < n; j++)
            printf("%d ", arr[m-1][j]);

    //---CLCULATING SUM---
    for(j = 0; j < n; j++)
            sum += arr[0][j];
    for(i = 1; i < m - 1; i++)
        for(j = 0; j < n; j++)
        {
            if(j == 0 || j == n-1)
                sum += arr[i][j];
        }
    for(j = 0; j < n; j++)
            sum += arr[m-1][j];

    printf("\nThe sum of boundary elements of the matrix is: %d", sum);
}
