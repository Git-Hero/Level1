#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//sorts using insertion sort

void sort(int *arr, int n)
{
	int i, j, temp, min;
	for (i=1; i<n-1; i++) {
		temp=arr[j];
		min = i;
		for (j = i+1; j < n; j++) {
			if (arr[min] > arr[j])
				min = j;
		}
		arr[j] = arr[min];
		arr[min] = temp;
	}
}

void getdata(int *arr, int n)
{
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
}

void printdata(int *arr,int n) {
	for (int i=0;i<n;i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int arr[n];
		getdata(arr, n-1);
		sort(arr, n);
		printdata(arr, n);
	}
	return 0;
}
