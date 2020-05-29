#include<stdio.h>

void main()
{
    int n,num = -1,remainder,sum,x;

    printf("Enter a number: \n");
    scanf("%d",&n);

    printf("Armstrong numbers are:\n");

    while(n!=0)
    {
        num++;
        x=num;
        sum=0;
        while(x!=0)
        {
            remainder=x%10;
            sum=sum+remainder*remainder*remainder;
            x=x/10;
        }
        if(sum==num)
        {
            printf("%d\n",num);
            n--;
        }
    }
}
