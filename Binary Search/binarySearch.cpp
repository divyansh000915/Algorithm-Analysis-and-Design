#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int x)
{
	if (h >= l) {
		int mid = l + (h - l) / 2;

		// If the element is present at the middle
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element is greater than mid
		return binarySearch(arr, mid + 1, h, x);
	}

	// When element is not present in array
	return -1;
}



int main()
{
	int n,key;
    	cout<<"Enter size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
   		cin>>arr[i];
   
	cout<<"Enter the key element";
	cin>>key;
	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element found at position " << result;
	return 0;
}
