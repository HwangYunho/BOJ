#include <iostream>
#include <string>
using namespace std;
int main()
{
	int alpha[26] = { 0 };
	string str;
	int index, max=0, count=0;
	cin >> str;
	for (int i=0;i<str.size();i++)
	{
		if (str[i]<97)
			alpha[str[i]-65]++;
		else
			alpha[str[i]-97]++;
	}
	for (int i=0;i<26;i++)
	{
		if (max<alpha[i])
		{
			max=alpha[i];
			index=i;
		}
	}
	for (int i=0;i<26;i++)
	{
		if (alpha[i]==max)
		{
			count++;
			if (count>=2)
			{
				cout<<"?";
				return 0;
			}
		}
	}
	cout<<(char)(index + 65);
}