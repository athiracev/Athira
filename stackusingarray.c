#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void Top();
void Display();

#define N 5
int stack[N];
int top=-1;

void push()
{
	int item;	
	printf("Enter the data\n");
	scanf("%d",&item);
	if(top==N-1)
	{
		printf("\noverflow\n");
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("\nunderflow\n");
	}
	else
	{
		item=stack[top];
		top--;
		printf("\n %d is popped item from stack",item);
	}
}
void Top()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}	
	else
	{
		printf("%d",stack[top]);
	}
}
void Display()
{
	int i;
	if(top==-1)
	{
		printf("\nunderflow\n");
	}
	else
	{
		printf("\n stack elements are  ");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}
void main()
{
	int ch;
	do
	{
		printf("\n1.push\n2.pop\n3.Display\n4.Top\n5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			Display();
			break;
		case 4:
			Top();
			break;
		case 5:
			exit(0);
		default :
			printf("Invalid!!!");
		}
	}while(ch!=0);
}
