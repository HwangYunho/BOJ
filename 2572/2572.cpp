#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;
int main()
{	
	int a, b, c;
	int count[10] = { 0 };
	stringstream s;
	string n;
	cin >> a >> b >> c;
	s << a*b*c;
	n = s.str();
	for (int i = 0; i < n.length(); i++)
	{
		count[n[i] -48]++;
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << endl;
}