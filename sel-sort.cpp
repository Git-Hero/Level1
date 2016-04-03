#include <iostream>
using namespace std;
 
//sorts using insertion sort
 
void sort(int *arr, int n)
{
	int i, j, temp;
	for (i = 1 ; i <= n - 1; i++) {
	    j = i;
	    while ( j > 0 && arr[j] < arr[j-1]) {
    		temp = arr[j];
                arr[j] = arr[j-1];
        	arr[j-1] = temp;
		j--;
    	    }
    	}
}
 
void getdata(int *arr, int n)
{
	for (int i=0; i<=n; i++){
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
