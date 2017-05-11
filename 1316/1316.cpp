#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,check = 0;
	string str;
	cin>>n;
	while(n)
	{
		cin>>str;
		int temp=0;
		for (int i=0;i<str.size();i++)
		{
			for (int j=i+2;j<str.size();j++)
			{
				if (str[i]==str[j])
				{
					if (str[i]!=str[j-1])
						temp++;
				}
			}
		}
		if (temp==0)
			check++;
		n--;
	}
	cout<<check;
}
