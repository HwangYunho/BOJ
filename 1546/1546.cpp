#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, temp;
	double g[1000];
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> g[i];
	for (int i = 1; i < n; i++)
	{
		if (g[0] < g[i])
		{
			temp = g[0];
			g[0] = g[i];
			g[i] = temp;
		}
	}
	double t = g[0];
	for (int i = 0; i < n; i++)
	{
		g[i] = g[i] / t * 100;
	}
	for (int i = 1; i < n; i++)
		g[0] += g[i];
	cout << g[0]/n;
}