#include<iostream>
using namespace std;
int main()
{
	int n, j=0;
	cin>>n;
	while(n>0)
	{
	  j+=n%10;
		n=n/10;
		
	}
	cout<<"sum="<<j;
	return 0;
}
