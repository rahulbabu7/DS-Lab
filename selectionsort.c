#include<stdio.h>
int main()
{
   
    int n,i,j;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    int count=0;
    int arr[n];
    
    for(i=0 ; i<n ; i++)
     {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
        count++;
     }count++;
     
    // Sorting //
    int l;
    for(i=0 ; i<n ; i++)
     {
        l = i;
        for(j=i+1 ; j<n ; j++)
         {
            if(arr[j] < arr[l])
             {
                l = j;
                count++;
             }
         }count++;
        
        if(l != i)
         {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
            count+3;
         }
    }
    
    // Printing Sorted Array //
    printf("\nSorted Array: ");
    for(int i=0 ; i<n ; i++)
     {
        printf(" %d" , arr[i]);
        count++;
     }count++;
     
     printf("time complexity %d",count);
     printf("space complexity %d",10*n+20);
    return 0;
}

