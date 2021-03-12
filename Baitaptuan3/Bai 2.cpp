#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap vao so n bat ky: ";
	cin>>n;
	int a[1000];
	cout<<"Nhap vao day so: ";
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	int max = a[1];
	int min = a[0];
	for(int i = 0; i<n; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	for(int i = 0; i<n; i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	int s = 0, count = 0;
	for(int i = 0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			s = s + a[i];
		}
	}
	for(int i = 0; i<n; i++)
	{
		if(a[i]%2==1)
		{
			count++;
		}
	}
	cout<<"Phan tu nho nhat la: "<<min<<endl;
	cout<<"Phan tu lon nhat la: "<<max<<endl;
	cout<<"Tong so chan la: "<<s<<endl;
	cout<<"So luong cac phan tu le la: "<<count;
	return 0;
	}
