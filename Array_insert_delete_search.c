#include<stdio.h>
#include<stdlib.h>
void main()
{

	int a[50],ch,i,n,x,pos,k;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(1)
	{
		printf("\n\n1.Insertion\n2.Deletion\n3.Searching\n\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:

		printf("\nEnter the element to insert\n");
		scanf("%d",&x);
		printf("Enter the position to be inserted\n");
		scanf("%d",&pos);
		if(pos<=0||pos>n+1)
		{
			printf("Invalid!!\n");
			exit(0);
		}
		else
		{
			for(i=n-1;i>=pos-1;i--)
			{
				a[i+1]=a[i];
			}
			a[pos-1]=x;
			n++;
		}
		printf("Array after insertion\nArray elements are\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		break;

	case 2:
		printf("Enter the position to be deleted\n");
		scanf("%d",&pos);
		if(pos<=0||pos>n)
		{
			printf("Invalid!!\n");
			exit(0);
		}
		else
		{
			for(i=pos-1;i<n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
		}
		printf("Array after deletion\nArray elements are\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		break;
	
	case 3:
		printf("Enter the element to be searched\n");
		scanf("%d",&k);
		int flag=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				flag=1;
				printf("Element found at position %d",a[i]);
			}
		}
		if(flag==0)
		{
			printf("Element not found\n");
		}
		break;
	default:
		printf("Invalid Choice!!!\n");
	}	
	}
}
