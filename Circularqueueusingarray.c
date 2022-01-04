#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int queue[N];
void enqueue(int x)
{
	if((front==-1)&&(rear==-1))
	{
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%N==front)
	{
		printf("\nQueue overflow\n");
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}
void dequeue()
{
	if((front==-1)&&(rear==-1))
	{
		printf("\nQueue  underflow\n");
	}
	else if(front==rear)
	{
		printf("The dequeud element is %d\n",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("\n The dequeued element is %d\n",queue[front]);
		front=(front+1)%N;
	}
}
void display()
{
	int i=front;
	if((front==-1)&&(rear==-1))
	{
		printf("\n Queue is underflow\n");
	}
	else
	{
		printf("\nElements in queue\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
			
		}
	}
}
void main()
{
	int choice,x;
	do
	{
		printf("\n\nenter your choice\n1.Insertion\n2.Deletion\n3.Display\n4.Display Front and Rear\n5.Exit\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter the element to be inserted\n");
			scanf("%d",&x);
			enqueue(x);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Front and rear is: %d\t\t%d",queue[front],queue[rear]);
			break;
		case 5:
			exit(0);
		default :
			printf("Invalid choice!!!\n");
			break;
		}
	}while(choice!=0);
}
