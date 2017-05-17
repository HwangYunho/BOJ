#include <iostream>
using namespace std;
int main()
{
	int n,x=1,y=1,c=1,t;
	cin>>n;
	t=n;
	n-=c;
	while(n>0)
	{
		c++;
		n-=c;
	}
	n=t,t=0;
	for(int i=1;i<c;i++)
		t+=i;
	t=n-t;
	if((c%2)==1)
	{
		x=c,y=1;
		for(int i=1;i<t;i++)
		{
			x--;
			y++;
		}
	}
	else
	{
		y=c,x=1;
		for(int i=1;i<t;i++)
		{
			x++;
			y--;
		}
	}
	cout<<x<<"/"<<y;
}