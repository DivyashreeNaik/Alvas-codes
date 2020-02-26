#include<stdio.h>
#include<math.h>

int binary_to_decimal(long int n)
{
int decimal = 0, i = 0, remainder;
while (n!=0)
{
remainder = n%10;
n /= 10;
decimal += remainder*pow(2,i);
++i;
}
return decimal;
}

int main()
{
long int n;
printf("Enter a binary number: ");
scanf("%ld", &n);
printf("\nDecimal number : %d\n ", binary_to_decimal(n));
return 0;
}
