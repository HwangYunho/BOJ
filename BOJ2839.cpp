#include <iostream>
using namespace std;
int main()
{
	int n,fc,tc;
	cin >> n;
	fc = n / 5;
	n = n % 5;
	if (n == 0)
		cout << fc;
	else
	{
		while (fc>=0)
		{
			if (n % 3 == 0)
			{
				tc = n / 3;
				cout << fc + tc;
				break;
			}
			fc--;
			n+=5;
		}
		if (fc==-1)
		cout << "-1";
	}
	return 0;
}