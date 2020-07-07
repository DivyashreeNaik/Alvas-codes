#include<stdio.h>

int fact(long int x)
{
	long int f=1,i;
	for(i=1;i<=x;i++)
		{
			f=f*i;
		}
	return f;
}

int main()
{
	long int n,r,p,temp;
	long int num,den;
	printf("Enter the number of seats available : ");
	scanf("%ld",&r);
	printf("Enter the number of persons : ");
	scanf("%ld",&n);
	if(n < r)
	{
		temp=n;
		n=r;
		r=temp;
	}
	num=fact(n);
	den=fact(n-r);
	p=num/den;
	printf("Number of ways people can be seated : ");
	printf("%ld",p);
}
