// !/usr/bin/g++

// program to convert the base of a number (base : 0 to 16)

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void numtobase(int num, int base)
{
	string digits = "0123456789ABCDEF";
	string result;
	if (num < 0)
		cout << '-';
	for (; num > 0; num /= base)
		result.insert(result.begin(), digits[abs(num % base)]);
	cout << result << endl;
}

int main()
{
	int num, base;
	cin >> num >> base;
	numtobase(num, base);

	return 0;
}
