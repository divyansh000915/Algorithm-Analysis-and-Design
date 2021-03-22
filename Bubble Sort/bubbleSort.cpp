#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

int main()
{
    int n;
    cout<<"Enter size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
