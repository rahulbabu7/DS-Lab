#include<stdio.h>
int main()
{
    int i,size;
    char tree[20];
    printf("\nEnter the size of the array:");
    scanf("%d",&size);
    printf("Enter the root element:");
    fflush(stdin);
    scanf("%c",&tree[0]);
    printf("for free space enter '_'\n");
    for(i=0;i<size;i++)
    {
        printf("Enter the left child of %c:",tree[i]);
        fflush(stdin);
        scanf("%c",&tree[(2*i)+1]);
        printf("Enter the right child of %c:",tree[i]);
        fflush(stdin);
        scanf("%c",&tree[(2*i)+2]);
    }
    printf("The binary tree using array representation (''_'''represents Empty spaces)\n");
    for(i=0;i<(2*size)+1;i++)
    {
        printf("%c",tree[i]);
    }
    return 0;
}