#include<stdio.h>
void main()
{
        int arr[50],search,i,n;
        printf("Enter the number of elements in array\n");
        scanf("%d",&n);
        printf("Enter %d integers\n",n);
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("Enter the number to search\n");
        scanf("%d",&search);


        for(i=0;i<n;i++)
        {       
                if(arr[i]==search)
                {
                        printf("%d is present at the location %d",search,i+1);
                        break;
                }
        }
        if(i==n)
        printf("%d isn't present in the array\n",search);

}
