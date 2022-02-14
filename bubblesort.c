#include <stdio.h>
int main()
{
  int array[10], n, i, j, swap,count=0,space=24;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  count++;
  printf("Enter %d integers\n", n);
  space=space+n*4;
  for (i = 0; i < n; i++)
  {
  count++;
    scanf("%d", &array[i]);
  }
  count++;
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1])
      {
     
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
        count=count+3;
      }
      count++;
    }
  }
  count++;
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
  {
     printf("%d\n", array[i]);
     count++;
  }
  count++;
  printf("\nThe space complexity is %d",space);
  printf("\nThe time complexity is %d",count);
  return 0;
 
}


