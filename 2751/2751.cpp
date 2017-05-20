#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	int n,t, number[1000000];
	cin >> n;
	t = n;
	while (n--)
		cin >> number[n];
	sort(number, number+t);
	for (int i = 0; i < t; i++)
		cout << number[i]<<"\n";	//endl이 나올 때마다 버퍼를 비우는 등의 부하가 
									//발생하기 때문에 이것만 "\n"으로 바꿔도 많이 빨라진다
}
/*
std::ios_base::sync_with_stdio
  C++  Input/output library std::ios_base 
static bool sync_with_stdio( bool sync = true );
Sets whether the standard C++ streams are synchronized to the standard C streams after each input/output operation.
The standard C++ streams are the following: std::cin, std::cout, std::cerr, std::clog, std::wcin, std::wcout, std::wcerr and std::wclog
The standard C streams are the following: stdin, stdout and stderr
For a standard stream str, synchronized with the C stream f, the following pairs of functions have identical effect:
*/