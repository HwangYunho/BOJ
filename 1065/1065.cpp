#include <iostream>
using namespace std;
void hansu(int n)
{
	int a,b,c,d=0;
	if (n < 100)
		cout << n;
	else
	{
		for (int i = 100; i <= n; i++)
		{
			a = i / 100;
			b = i / 10 %10;
			c = i % 10;
			if (b - a == c - b)d++;
		}
		cout << 99 + d;
	}
}
int main()
{
	int num;
	cin >> num;
	hansu(num);
}