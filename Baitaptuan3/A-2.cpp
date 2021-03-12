#include<iostream>
using namespace std;
int main()
{
	string s = "abcd";
	int length = s.length();
	for(int i = 0; i<length; i++)
	{
		cout<<s[i];
		cout<<endl<<s;
	}
}

