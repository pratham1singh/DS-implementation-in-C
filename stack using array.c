#include<stdio.h>
#include<string.h>
int stack[10],top=-1,mxsize=10;

void push()
{
	if(top>=mxsize-1)
		{printf("Overflow\n");
		return;
		}
	else
	{
		int data;
		printf("Enter data to push\n");
		scanf("%d",&data);
		top+=1;
		stack[top]=data;
		printf("DONE\n");
	}
	
	
	
}
int pop()
{
	if(top<0)
	{
		printf("Underflow\n");
		return;
	}
	else
	{
		int poped_d=stack[top];
		top-=1;
		printf("DONE\n");
		return poped_d;
	}
	
}
void display()
{
	int i=top;
	printf("\nSTACK IS");
	while(i!=-1)
	{
		printf("%d\n",stack[i]);
		i-=1;
	}
	printf("\n");
	
}
void main()
{
	int ch;
	char str[10];
	printf("Enter ""push"" to push into the stack\n");
	printf("Enter ""pop"" to pop data from  the stack\n");
	printf("Enter ""display"" to display  the stack\n");
	while(1>0)
	{
		
		scanf("%s",&str);
		if(strcmp(str,"push")==0)
			push();
		if(strcmp(str,"pop")==0)
			pop();
		if(strcmp(str,"display")==0)
			display();
		else if(str=="exit")
		   return;
	}
	
}
