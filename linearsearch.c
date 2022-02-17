#include<stdio.h>
int main()
{
int n,i,x,Arr[10],count=0,space;
printf("Enter the value of n: ");
scanf("%d",&n);
space=space+n*4;
count ++;
printf("Enter the elements of array:\n");
count ++;
for(i=0;i<n;i++)
{
   scanf("%d",&Arr[i]);
   count++;
 }
count ++;
printf("Elements to be searched \n");
scanf("%d",&x);
count++;
for(i=0;i<n;i++)
{
  if (Arr[i]==x)
  {
  printf("%d is element founded in position %d\n", x,i+1);
  count++;
  break;
  }
  count++;
  }
  if (i==n)
  {
  printf("Not found");
  count++;
  }
  count++;
  {
  printf("\nTime complexiy is: %d",count);
  printf("\nSpace complexity is: %d\n",10*n+20);
  return 0;
  }
  }