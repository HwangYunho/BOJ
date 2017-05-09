#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	int n,c;
	char str[21],str1[200];
	cin>>n;
	while(n)
	{
		cin>>c;
		cin.ignore();
		cin.getline(str,21);
		for(int i=0;i<strlen(str);i++)
		{
			for(int j=i*c;j<i*c+c;j++)
				str1[j]=str[i];
		}
		str1[strlen(str)*c]='\0';
		for(int i=0;i<strlen(str1);i++)
			cout<<str1[i];
		cout<<endl;
		n--;
	}
}