#include<iostream>
#define MAXSIZE 3
using namespace std;
int   cq[MAXSIZE],rear=-1,front=-1;
int insert()
{
	int ele;
	if(front==((rear+1)%MAXSIZE))
	{
		cout<<" cicular queue is full";
		//return
	}
	else
	{
		rear=(rear+1)%MAXSIZE;
		if (front==-1);
		{
			front=0;
		}
		cout<<" enter an element";
		cin>>ele;
		 cq[rear]=ele;
		cout<<ele<<"is inserted";
		
	}
}
int del()
{ int ele;
if(front==-1||front>rear)
{
	cout<<" circular queue is empty";
	
}
else
{
	
	ele= cq[front];
	cout<<endl<<ele<<" is deleted";
	front=(front+1)%MAXSIZE;
	if(front==0 && rear==(MAXSIZE-1)||(front>rear))
	{
		front=-1;
		rear=-1;
	}
}
}
//displaying
int display()
{
	int i;
	if (front==-1 ||rear==-1)
	{
		cout<<" circular queue is empty\n";
	
	}
	else
	{
		cout<<"queue contents are:";
		for(int i = front; i<=rear; i++)
		{
			cout<<cq[i]<<endl;
		}
	}
}
int main()
{
	int n;
	while(n!=4)
	{
		cout<<"\n enter what you want to do \n"<<"1.insert"<<"\t"<<"2.delete"<<"\t"<<"3.display"<<"\t"<<"4.exit"<<"\n"<<"\t";
		cin>>n;
		switch (n)
		{
			case 1:
				insert();
				break;
			case 2 :
				del();
				break;
			case 3 :
				display();
				break;
			
		}
	}
	if(n==4)
	{
		cout<<"exit"<<"\n";	 
	}
	return 0;
	
}
  
