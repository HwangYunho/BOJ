#include <iostream>
using namespace std;
int main()
{
	int n, t=1, c=1;
	cin >> n;
	while (t < n)
	{
		t = t + c * 6;
		c++;
	}
	cout << c;
}