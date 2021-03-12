#include<iostream>
using namespace std;
int main()
{
	int n,a[10000];
	cout<<"Nhap vao so N: ";
	cin>>n;
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i<n; i++)
	{
		if(a[i]==a[i+1])
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		break;
	}
	return 0;
}
