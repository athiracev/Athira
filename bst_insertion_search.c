#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
int f=0;
typedef struct node NODE;
NODE *root;
NODE *insertion(NODE *ptr,int item)
{
if (ptr==NULL)
{
ptr=(NODE*)malloc(sizeof(NODE));
ptr->left=ptr->right=NULL;
ptr->data=item;
}
else if(item<ptr->data)
ptr->left=insertion(ptr->left,item);
else
ptr->right=insertion(ptr->right,item);
return ptr;
}void display(NODE *ptr)
{
if(ptr!=NULL)
{
display(ptr->left);
printf("%d\t",ptr->data);
display(ptr->right);
}
}
void search(NODE* ptr, int item)
{
if(ptr==NULL)
{
printf("Item not found\n");
return;
}
else if(item==ptr->data)
{
printf("\nItem Found\n");
f=1;
}
else if(item < ptr->data)
search(ptr->left,item);
else if(item > ptr->data)
search(ptr->right,item);
}
void main()
{
int ch1,ch2,num;
root=NULL;
do
{
printf("\n1.Insertion");
printf("\n2.Search");
printf("\n3.Display");
printf("\n4.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch1);
switch(ch1){
case 1: printf("Enter item:\n");
scanf("%d",&num);
root=insertion(root,num);
break;
case 2: if(root==NULL)
{
printf("Empty tree!");
break;
}
else
{
printf("Enter the value:");
scanf("%d",&num);
search(root,num);
}
break;
case 3: if(root==NULL)
{
printf("\nEmpty tree");
break;
}
else
display(root);
break;
case 4:exit(0);
default:printf("Invalid choice");
break;
}
