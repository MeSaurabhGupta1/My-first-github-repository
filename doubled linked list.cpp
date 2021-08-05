#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node* root=NULL;
int len;
void append(void);
void addAtBegin(void);
void addAtAfter(void);
int length(void);
void traverse(void);
void Delete(void);
void swap(void);
void reverse(void);
int main()
{
	while(1)
	{
		printf("\nPress\n1.Append\n2.Add at begin\n3.Add at after\n4.Length\n5.Traverse\n6.Delete\n7.Swap\n8.reverse\n9.Quit\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					append();
					break;
				}
			case 2:
				{
					addAtBegin();
					break;
				}
			case 3:
				{
					addAtAfter();
					break;
				}
			case 4:
				{
					len=length();
					printf("Length is %d",len);
					break;
				}
			case 5:
				{
					traverse();
					break;
				}
			case 6:
				{
					Delete();
					break;
				}
			case 7:
				{
					swap();
					break;
				}
			case 8:
				{
					reverse();
					break;
				}
			case 9:
				exit(1);
			default:
				printf("Invalid choice\n");
		}
	}
}
void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter element\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	root=temp;
	else
	{
		struct node* p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
	}
}
void addAtBegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	printf("Enter element\n");
	scanf("%d",&temp->data);
	if(root==NULL)
	root=temp;
	else
	{
		struct node* p=root;
		temp->right=p;
		p->left=temp;
		root=temp;
	}	
}
void addAtAfter()
{
	int loc;
	printf("Enter location where you want to insert\n");
	scanf("%d",&loc);
	if(loc>=length())
	printf("Invalid location\n");
	else
	{
	
	    struct node* temp;
	    temp=(struct node*)malloc(sizeof(struct node));
	    temp->left=NULL;
	    temp->right=NULL;
	    printf("Enter element\n");
	    scanf("%d",&temp->data);
	    int i=1;
	    struct node* p=root;
	    while(i<loc)
	    {
	    	p=p->right;
	    	i++;
		}
		struct node* q=p->right;
		temp->right=q;
		q->left=temp;
		temp->left=p;
		p->right=temp;
    }
	
}
int length()
{
	int count=0;
	struct node* p=root;
	while(p!=NULL)
	{
		p=p->right;
		count++;
	}
	return count;
}
void traverse()
{
	if(root==NULL)
	printf("No elements\n");
	else{
	
    struct node* p=root;
	while(p!=NULL)
	{
		printf("%d-->",p->data);
		p=p->right;
	}}
}
void Delete()
{
	printf("Enter the location to be deleted\n");
	int loc,count=0;
	scanf("%d",&loc);
	struct node* temp=root;
	while(temp!=NULL)
	{
		temp=temp->right;
		count++;
	}
	if(loc>count)
	printf("Invalid location\n");
	else if(loc==1)
	{
		struct node* p=root;
		root=p->right;
		p->right->left=NULL;
		free(p);
	}
	else
	{
		struct node* p=root;
		int i=1;
		while(i<loc-1)
		{
			p=p->right;
			i++;
		}
		struct node* q=p->right;
		p->right=q->right;
		q->right->left=p->right;
		free(q);
	}
}
void swap()
{
	printf("Enter the position you want to swap\n");
	int loc;
	scanf("%d",&loc);
	if(loc>=length())
	printf("Invalid position\n");
	else
	{
		struct node *p=root,*q,*r;
		int i=1;
		while(i<loc-1)
		{
			p=p->right;
			i++;
		}
		q=p->right;
		r=q->right;
		q->right=r->right;
		r->right->left=r->left;
		q->left=r;
		r->right=r->left;
		r->left=p;
		p->right=r;
	}
}
void reverse()
{
	
}

































