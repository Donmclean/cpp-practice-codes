//Don Mclean
//06/05/2015

#include <iostream>

using namespace std;

int getMidPoint(int min, int max);

int binary_search(int arr[], int target, int n);

int main(int argc, char *argv[]) {
	
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(int);
	
	cout << "Enter a target number between 1 & 9" << endl;
	
	int target = 0;
	cin >> target;
	
	int result = 0;
	result = binary_search(arr, target, size);
	
	if(result >= 0)
	{
	    cout << "The number " << arr[result] << " was found at the element with index " << result << endl;
	}
	else
	{
	    cout << "The number " << target << " was not found. " << endl;
	}
	
	return 0;
}

int getMidPoint(int min, int max)
{
	return min + max / 2;
}

int binary_search(int arr[], int target, int n)
{
	int max = n - 1;
	int min = 0;
	
	int midpoint;
	
	while (min <= max) {
		midpoint = getMidPoint(min, max);
		
		if(target == arr[midpoint])
		{
			return midpoint;
		}
		else if (target > arr[midpoint]) {
			min = midpoint + 1;
		}
		else {
			max = midpoint - 1;
		}
	}
	
	return -1;
}
