#include<stdio.h>
int main()
{
  int array[100],search,i,n;
  printf("Enter the number of elements in array \n");
  scanf("%d",&n);
  printf("Enter the %d integer(s)\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);
  printf("Enter the element to be search\n");
  scanf("%d",&search);
  for(i=0;i<n;i++)
   {
     if(array[i]==search)
      {
      printf("%d is present at location %d \n",search,i+1);
      break;
      }
    }
  if(i==n)
  printf("%d is not in the array.\n",search);
  return 0;
 }
    

 
