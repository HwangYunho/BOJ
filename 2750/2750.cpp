#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,t, number[1000];
	cin >> n;
	t = n;
	while (n--)
		cin >> number[n];
	sort(number, number+t);
	for (int i = 0; i < t; i++)
		cout << number[i]<<endl;
}