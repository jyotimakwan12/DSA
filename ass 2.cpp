#include<iostream>
#define MAXSIZE 3
using namespace std;
int stack[MAXSIZE],top=-1;
int push(int element)
{
	if(top==MAXSIZE-1)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		top++;
		stack[top]=element;
		cout<<endl<<element<<"is inserted at"<<top<<"position"<<endl;
		
	}
	
}
int pop()
{
	int element;
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
		
	}
	else
	{
		element=stack[top];
		top--;
		cout<<endl<<element<<"is deleted"<<endl;
	}
}
int display()
{
	int i;
	if(top==-1)
	{
		cout<<"\n stack is empty";
	}
	else
	{
		cout<<"\n\n\t stack content:";
		for(i=0;i<=top;i++)
		{
			cout<<stack[i]<<"\t";
		}
	}
}
int main()
{
	int n;
	while(n!=4)
	{
		cout<<"enter what you to do\n"<<"1.push"<<"2.pop"<<"3.display"<<"\t"<<"4.exit"<<"\n"<<"\t";
		cin>>n;
		switch(n)
		{
		case 1 :
			cout<<"enter the element to be stored"<<"\n";
			int element;
			
		    cin>>element;
		    push(element);
		break;
		
		case 2:
			pop();
			break;
			
		case 3 :
			display();
			break;
			
		}
}
if(n=4);
cout<<"exit"<<"\n";

return 0;
}

