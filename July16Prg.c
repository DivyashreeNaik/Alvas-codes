#include <stdio.h>

int make_equal(int a[], int n)
{
int flag = 1;
for (int i = 0; i < n; i++)
{
while (a[i] % 2 == 0)
a[i] /= 2;
while (a[i] % 3 == 0)
a[i] /= 3;
}

for (int i = 1; i < n; i++)
{
if (a[i] != a[0])
{
flag = 0 ;
}
return flag;
}
}

int main()
{
int n, i;
scanf("%d", &n);
int a[n];
for(i=0; i<n; i++)
scanf("%d", &a[i]);
if (make_equal(a, n) == 1)
printf("Yes");
else
printf("No");
return 0;
}
