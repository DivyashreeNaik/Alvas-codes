#include<stdio.h>
#include<math.h>

void findMaximumBefore(int arr[], int n){

    for (int i = 0; i < n; i++) {

        int currAns = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > currAns &&
                   arr[j] < arr[i]) {
                currAns = arr[j];
            }
        }
        printf("%d ", currAns);
    }
}

void main()
{
    int arr[] = { 4, 7, 6, 8, 5 };

    int n = sizeof(arr) / sizeof(arr[0]);
    findMaximumBefore(arr, n);
}
