#include <iostream>
using namespace std;
int main() {
	char gr[12] = "FFFFFFDCBAA";
	int n;
	cin >> n;
	cout << gr[n / 10];
	return 0;
}