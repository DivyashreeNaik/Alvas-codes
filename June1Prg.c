#include<stdio.h>

void main()
{
    int n, i, j, a[10];
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("The leaders are\n");
    for (int i = 0; i < n; i++)
    {
        j = 0;
        for (j = i+1; j < n; j++)
        {
            if (a[i] <= a[j])
                break;
        }
        if (j == n)
            printf("%d ",a[i]);
  }
}
