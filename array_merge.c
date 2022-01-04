#include<stdio.h>
void main()
{
	int a[50],b[50],c[100],i,j,k,m,n,temp;
	printf("Enter the limit of 1st array\n");
	scanf("%d",&m);
	printf("Enter the elements of 1st array\n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&a[i]);
	c[i]=a[i];
	}
	k=i;
	printf("Enter the limit of 2nd array\n");
	scanf("%d",&n);
	printf("Enter the elements of 2nd array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	c[k]=b[i];
	k++;
	}
	printf("Array after merging\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
	printf("\n");
	
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("Array after merging and sorting \n");
	for(i=0;i<k;i++)
	printf("%d\t",c[i]);
}

