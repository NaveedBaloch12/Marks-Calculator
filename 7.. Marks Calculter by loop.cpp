#include<iostream>

using namespace std;
int main()
{
	float a,f,i,j,o_sum,t_sum,p;
	o_sum=0;
	t_sum=0;
	cout<<"This program will tell us Obtained Marks, %age of student\n\n";
	cout<<"Number of subjects= ";
	cin>>a;
	
	for(i=1; i<=a; i++)
	{
		cout<<"Enter total mraks in "<<i<<" subject= ";
		cin>>j;
		cout<<"Enter Obtained marks in "<<i<<" subject= ";
		cin>>f;
		o_sum=o_sum+f;
		t_sum=t_sum+j;	
	}
	cout<<"Obtained Marks= "<<o_sum<<"/"<<t_sum;
	p=(o_sum/t_sum)*100;
	cout<<"\nPercentage= "<<p<<"%";
	
	if(p>=33){
		cout<<"\nStudent is Pass";
	}
	else{
		cout<<"\nStudent is Faill";
	}
}
