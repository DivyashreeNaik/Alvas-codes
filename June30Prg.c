# include<stdio.h>
# include<stdlib.h>

/*This function divides a by greatest divisible
  power of b*/
int maxDivide(int a, int b)
{
  while (a%b == 0)
   a = a/b;
  return a;
}

/* Function to check if a number is ugly or not */
int isUgly(int no)
{
  no = maxDivide(no, 2);
  no = maxDivide(no, 3);
  no = maxDivide(no, 5);

  return (no == 1)? 1 : 0;
}

/* Function to get the nth ugly number*/
int getNthUglyNo(int n)
{
  int i = 1;
  int count = 1;   /* ugly number count */

  /*Check for all integers untill ugly count
    becomes n*/
  while (n > count)
  {
    i++;
    if (isUgly(i))
      count++;
  }
  return i;
}

/* Driver program to test above functions */
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        unsigned no = getNthUglyNo(i);
        printf("%d ",  no);
    }
    return 0;
}
