#include<stdio.h>
void main()
{
        int arr[50],c,first,middle,last,n,search,temp;
        printf("enter number of elements\n");
        scanf("%d",&n);
        printf("Enter %d integers\n",n);
        for(c=0;c<n;c++)
                scanf("%d",&arr[c]);
        printf("enter the value to find");
        scanf("%d",&search);   
        first=0;
        last=n-1;
        middle=(first+last)/2;
        while(first<=last)
        {
                        if(arr[middle]<search)
                        first=middle+1;
                        else if(arr[middle]==search)
                        {
                                printf("%d found at location %d\n",search,middle+1);
                                break;
                        }
                        else
                        last=middle-1;
                        middle=(first+last)/2;
        }
                if(first>last)
                        printf("not found %d isnt present in the list\n",search);
}

