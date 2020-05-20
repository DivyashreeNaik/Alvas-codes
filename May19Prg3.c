#include<stdio.h>
#include<math.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int countWays(int arr[], int n)  
    {  
        int max_val = 0; 
        for (int i = 0; i < n; i++)  
            max_val = max(max_val, arr[i]);  
        
        int freq[20]={0};  
        for (int i = 0; i < n; i++)  
            freq[arr[i]]++;  
  
        int ans = 0; 
  
        ans += freq[0] * (freq[0] - 1) * (freq[0] - 2) / 6;  
  
        for (int i = 1; i <= max_val; i++)  
            ans += freq[0] * freq[i] * (freq[i] - 1) / 2;  
  
        for (int i = 1; 2 * i <= max_val; i++)  
            ans += freq[i] * (freq[i] - 1) / 2 * freq[2 * i];  
    
        for (int i = 1; i <= max_val; i++) {  
            for (int j = i + 1; i + j <= max_val; j++)  
                ans += freq[i] * freq[j] * freq[i + j];  
        }  
  
        return ans;  
    }  
  
    int main() 
    {  
        int arr[]={1, 5, 3, 2 };  
        int n = sizeof(arr)/sizeof(int);  
        printf("%d",countWays(arr, n));  
        return 0; 
    }  