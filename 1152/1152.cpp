#include <iostream>
#include <string.h>
using namespace std;
int main()
{	
	int c=0;
	char str[1000003];
	cin.get(str, 1000003);
	int n = strlen(str);
	for (int i = 0; i <n; i++)
	{
		if (str[i] == ' ')
			c++;
	}
	if (str[0] == ' ')
		c--;
	if (str[n-1] == ' ')
		c--;
	cout << c+1;
}