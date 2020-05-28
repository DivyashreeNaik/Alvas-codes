#include<stdio.h>
#include<conio.h>

int main()
{
    int n, k, arr[10], sum = 0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Enter the %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d",&k);

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    sum = sum % k;
    printf("%d", sum);
    return 0;
}
