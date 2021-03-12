#include<iostream>
using namespace std;
int main()
{
	int n, sodenhap;
	cout<<"Nhap vao so n: ";
	cin>>n;
	int a[n];
	for(int i = 0; i<10; i++)
	{
		a[i] = 0;
	}
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap so thu "<<i<<" ";
		cin>>sodenhap;
		a[sodenhap]++;
	}
	for(int i = 0; i<10; i++)
	{
		cout<<"So chu so "<<i<<" la: "<<a[i]<<endl;
	}
	return 0;
}
