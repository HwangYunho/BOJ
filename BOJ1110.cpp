#include <iostream>
using namespace std;
int main()
{
	int n,first,c=0;
	cin>>n;
	first=n;
	do
	{
		n=n%10*10+(n/10+n%10)%10;
		c++;
	}while(first!=n);
	cout << c;
}	