#include <iostream>
#include <string>
using namespace std;
int main()
{
	int grade=0;
	int t = 1;
	int n;
	string str;
	cin >>n;
	while (n != 0)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (i != 0 && str[i] == 'O')
			{
				if (str[i - 1] == 'O')
					t++;
				else
					t = 1;
				grade += t;
				
			}
			if (i==0 && str[0] == 'O')
				grade += 1;
		}
		cout << grade<<endl;
		n--;
		t = 1;
		grade = 0;
	}
}