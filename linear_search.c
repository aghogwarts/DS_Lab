#include<stdio.h>

int main()
{
    int i, n, pos, ele, a[50];
    printf(">> Enter the number of elements: ");
    scanf("%d",&n);
    printf("> Enter the values:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(">> Enter the element to be searched: ");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(a[i]==ele){
            printf("\n-- Element found at index %d or position %d",i,i+1);
            exit(0);
        }
    }
    printf("\n-- Element does not exist.");
    printf("\n\n");
    return 0;
}
