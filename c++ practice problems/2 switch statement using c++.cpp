#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter the grade"<<endl;
	cin>>grade;
	switch(grade)
	{
		            //in this switch statement two cases are used for samll and large alphbets
		case 'a':
		case 'A':cout<<"excellent"<<endl;
		break;
		case 'b':
		case 'B':cout<<"very good"<<endl;
		break;
		case 'c':
		case 'C':cout<<"good"<<endl;
		break;
		case 'd':
		case 'D':cout<<"poor"<<endl;
		break;
		default:
			cout<<"invalid entry"<<endl;
			break;
	}
}
