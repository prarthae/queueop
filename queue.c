#include<stdio.h>
#include<stdlib.h>
int q[5];
int max=5;
int front=-1;
int rear=-1;
void enq()
{
 
 if(rear==max-1)
	printf("queue is full");
 else
	if(front==-1)
		front=0;
	rear=rear+1;
	printf("Give number to be inserted : ");
	scanf("%d",&q[rear]);
}
void deq()
{
  if(front==-1||front>rear)
	printf("Under flow");
  else
	{
	  printf("the removed element is %d",q[front]);
	  front=front+1;   
	}
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
	  printf("%d \n",q[i]);
	}
}
void main()
{
 int op;
	printf("\n\n\n");
	printf("\t QUEUE OPERATIONS");
  while(1)
	{
	printf("Choose an option from below\n");
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	printf("Enter Your option : ");
	scanf("%d",&op);

	 switch(op)
		{
		  case 1:
			enq();
			break;
		  case 2:
			deq();
			break;
		  case 3:
			display();
			break;
		  case 4:
			exit(0);
		  default:
			printf("Invalid option");
		}
	} 

}
