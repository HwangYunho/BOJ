#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	int a = 0, b = 0;
	cin >> str1 >> str2;

	for (int i = 0; i < 3; i++)
	{
		a = a + pow(10, i)* (str1[i] - 48);
		b = b + pow(10, i)* (str2[i] - 48);
	}
	(a > b ? cout << a : cout << b);
}
