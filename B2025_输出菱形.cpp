#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"对角线长度为：";
	cin>>n;
	/*打印上半部分*/ 
	for(int i=0;i<=n/2;i++)
	{
		for(int j=n/2-i;j>0;j--)
		{
			cout<<" ";
		}
		
		for(int j=2*i+1;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	/*打印下半部分，比上半部分少一行对角线*/ 
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<" ";
		}
		for(int j=n-2*(i+1);j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	/*for(int i=1;i<=n/2;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=n-2*i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	cout<<" "<<endl;
	return 0;
}
