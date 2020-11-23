#include<iostream>
using namespace std;

int main()
{
	int x=1;
	int sum=0;
	int number=0;
	while(x<=5)
	{
		cout<<"enter any number"<<endl;
		cin>>number;
		sum=sum+number;
		x++;
		
	}
	cout<<"sum is :"<<sum<<endl;
}
