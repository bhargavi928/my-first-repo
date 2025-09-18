#include<stdio.h>
#include<stdlib.h>
struct node
 {
 	int data;
 	struct node*next;
	 }*front=NULL,*rear=NULL,*temp=NULL;
void insert();
void del();
void display();
int main()
{
  int choice,ele;
  do{
  	printf("\n**menu**\n");
  	printf("\n 1.insert, 2.delete ,3.display\n");
  	printf("\nenter your choice\n");
  	scanf("%d",&choice);
  	switch(choice)
  	{
  		case 1:printf("enter element");
  		       scanf("%d",ele);
  		       insert();break;
  	    case 2:del();break;
  	    case 3:display();break;
  	    default:printf("your choice is invalid");
	  }
  }	while(choice<4);
}

void insert()
{
	temp=(struct node*)malloc(sizeof ( struct node));
	printf("enter a value");
	scanf("%d",&ele);
	if(front==NULL&&rear==NULL)
	{
		temp->next=NULL;
		front=rear=temp;
		}
	else
	{
		rear->next=temp;
		rear=temp;
		rear->next=NULL;
	}
}

void del()
{
	if(front==NULL)
	{
		printf("queue is empty");
		return;
	}
	else
	{
		front=temp;
		front->next=front;
		ele=temp->data;
		free(temp)
		printf("%d is deleted",ele);
	}
}

void display()
{
	if(front==NULL&&rear==NULL)
	{
		printf("queue is empty");
		return;
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("%d",remp->data);
			temp=temp->next;
		}
		
	}
}





