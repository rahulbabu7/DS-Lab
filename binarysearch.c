#include <stdio.h>

int main() {
    int i,j,limit,myArray[100],key,low,high,mid,count=0;
    count++;
    printf("Enter the size of array:");
    scanf("%d",&limit);
    count++;
    //Entering the element
    printf("Enter the elements:");
    for(i=0;i<limit;i++){
        
        scanf("%d",&myArray[i]);
        count++;
    }
    count++;
    //Displaying element
    printf("The given elements are:");
    for(i=0;i<limit;i++){
        
        printf("%d",myArray[i]);
        count++;
    }
    printf("  Enter the element to be found:");
    scanf("%d",&key);
    count++;
    //sorting
    low=0;
    high=limit-1;
    mid=low+high/2;
    count+3;
    //sorting has been here
    while(low<=high){
        count++;
        if(myArray[mid]<key){
            low=mid+1;
            count++;
        }
        
        
        else if(myArray[mid]==key){
            printf(" %d is at location %d ",key,mid+1);
            count++;
            break;
        }
        
        
        else{
            
            high=mid-1;
            
            count+2;
        }
        
      mid=high+low/2;  
    }
    count++;
    if(low>high){
        
        printf("  Not found %d ",key);
        count++;
        
    }
    count++;
    printf("  Time complexity:%d ",count);
    
    
    
    
    return 0;
}
