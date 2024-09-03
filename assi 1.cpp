#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	string name;
	float sgpa;
};
void quicksort(student s[],int low,int high);
int partition(student s[],int low,int high);
int main()
{
	cout<<"enter number of entries to accept:";
	int n;
	cin>>n;
	student s[n];
	//input
	for(int i=0;i<n;i++)
	{
		cout<<"enter roll no of student:";
		cin>>s[i].roll_no;
		cout<<"enter name of student:";
		cin>>s[i].name;
		cout<<"enter sgpa of student:";
		cin>>s[i].sgpa;
	}
	//bubble sort
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(s[j].roll_no>s[j+1].roll_no)
			{
				student temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				
			}
		}
	}
	//output bubble
	cout<<endl<<"roll number-wis order"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"student"<<i+1<<"details:"<<endl<<s[i].roll_no<<""<<s[i].sgpa<<endl;
	}
	//insertion sort
	for (int i=1;i<n;i++)
	{
		student tosort =s[i];
		int j=i-1;
		while(j>=0&&s[j].name> tosort.name)
		{
			s[j=1]=s[j];
			j=j-1;
			
		}
		s[j+1]=tosort;
	}
	//output insertion
	cout<<endl<<"alphabetical order"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"student"<<i+1<<"details:"<<endl<<s[i].roll_no<<""<<s[i].name<<""<<s[i].sgpa<<endl;
	}
	quicksort(s,0,n-1);
	//output quicksort
	cout<<endl<<"sgpa order"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<"student detals:"<<endl<<s[i].roll_no<<""	<<s[i].name<<""<<s[i].sgpa<<endl;
	}
	//linear search
	cout<<endl<<"enter sgpa to search(linear)"<<endl;
	float searchl;
	int num=0;
	cin>>searchl;
	for(int i=0;i<n;i++)
	{
		if(s[i].sgpa==searchl)
		{
			cout<<endl<<"student"<<"roll no:"<<s[i].roll_no<<""<<s[i].name<<""<<s[i].sgpa<<endl;
			num++;
		}
	}
	if(num==0)
	{
		cout<<"no student with given sgpa found";
		
	}
	//binary search
	cout<<endl<<"enter sgpa to search (binary)"<<endl;
	float searchb;
	int numb=0;
	int high=n;
	int low=0;
	int mid=(high+low)/2;
	cin>>searchb;
	int found=0;
	while(low<=high)
	{
		int mid=(high+low)/2;
		if(s[mid].sgpa==searchb)
		{
			cout<<endl<<"student"<<"roll no:"<<s[mid].roll_no<<""<<s[mid].name<<""<<s[mid].sgpa<<endl;
			found++;
			break;
		}
		else if(s[mid].sgpa<searchb)
		{
			low=mid+1;
		}
		else
		high=mid-1;
	}
	if(found==0)
	{
		cout<<endl<<"no student with given sgpa found"<<endl;
	}
	}
	// quick sort
	int  partition(student s[],int low,int high)
	{
		student pivot=s[high];
		int i=low-1;
		for(int j=low;j<high;j++)
		{
			if (s[j].sgpa<pivot.sgpa)
			{
				i++;
				student temp1=s[i];
				s[i]=s[j];
				s[j]=temp1;
			}
			
		}
		student temp2=s[i+1];
		s[i+1]=s[high];
		s[high]=temp2;
		return i+1;
	}
	void quicksort(student s[],int low,int high)
	{
		if(low<high)
		{
			int pivot_index=partition(s,low,high);
			quicksort(s,low,pivot_index-1);
			quicksort(s,pivot_index+1,high);
		}
	}


