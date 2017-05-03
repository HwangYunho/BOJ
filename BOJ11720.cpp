#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	char str[101];
	cin >> n >> str;
	for (int i = 0; i < n; i++)
		sum = sum + (str[i] - 48);
	cout << sum;
}
