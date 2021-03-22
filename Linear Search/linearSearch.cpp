#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	for (int i= 0; i < n; i++)
		if (arr[i] == x)
			return i;
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
    {
        cin>>arr[i];
    }
	cout<<"Enter the key element";
	cin>>key;

	int index = search(arr, n, key);
	if (index == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element found at position " << index;

	return 0;
}
