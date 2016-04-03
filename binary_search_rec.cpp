// !/usr/bin/g++
// Searches for an element using binary search
#include <iostream>
using namespace std;

int binsearch(int *arr, int l, int r, int val)
{
	int mid = (l + (r - l)) / 2;
	if (arr[mid] == val)
		return mid+1;
	if (l > r)
		return -1;
	if (arr[mid] >= val)
		binsearch(arr, mid+1, r, val);
	else
		binsearch(arr, l, mid-1, val);
}

int main()
{
	int t, n,val, i;
	int arr[100];
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		for (i = 0; i <= n; i++);
			cin >> arr[i];

		cin >> val;
		cout << binsearch(a, 0, n, val)<< endl;
	}
	return 0;
}
