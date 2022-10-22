#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,i;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Not Prime"<<endl;
	}
	else
	{
		cout<<"Prime"<<endl;
	}
}
