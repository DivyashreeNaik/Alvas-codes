#include <stdio.h>
#include<stdlib.h>

int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;

    for (int i = 0; i < n; i++) {

        xor_arr = xor_arr ^ arr[i];
    }

    return xor_arr;
}

int main()
{

    int arr[] = { 3, 9, 12, 13, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", xorOfArray(arr, n));

    return 0;
}
