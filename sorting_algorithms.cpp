//Don Mclean
//06/04/2015

#include <iostream>

using namespace std;

void swap(int& a, int& b);
void bubble_sort(int arr[], int n);
void my_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);

int main(int argc, char *argv[]) {
	
	int arr[] = {43,25,65,76,23,1,23,54,67,100};
	int size = sizeof(arr)/sizeof(int);
	
	//array before sorting
	cout << "array before sort: ";
	print_array(arr, size);
	
	
//	choose a sorting algorithm by uncommenting one below

	bubble_sort(arr, size);
//  my_sort(arr, size);
//	selection_sort(arr, size);
//	insertion_sort(arr, size);

	cout << "array after sort:  ";
	print_array(arr, size);
	
	return 0;
}

void bubble_sort(int arr[], int n)
{
	bool swapped = true;
	
	while(swapped)
	{
		swapped = false;
		for(int i = 1; i < n; i++)
			{
				for(int j = i-1; j < i; j++)
				{
					if(arr[j] > arr[i])
					{
						swap(arr[j], arr[i]);
						swapped = true;
					}
				}
			}
	}
	
}

void my_sort(int arr[], int n)
{
	if (n < 2)
	{
		cout << "array is too small or already sorted." << endl;
	} else {
			for (int i = 1; i < n; i++)
			{
				for(int j = 0; j < i; j++)
				{
					if (arr[j] > arr[i])
					{
						swap(arr[j], arr[i]);
					}
				}
			}
		}
}

void selection_sort(int arr[], int n)
{
	bool sorted = false;
	int min_index = 0;
	
	if (n < 2)
	{
		cout << "array is too small or already sorted." << endl;
	} else {
		for(int i = 0; i < n-1; i++)
		{
			min_index = i;
			for(int j = i+1; j < n; j++)
			{
				if(arr[j] < arr[min_index])
				{
					min_index = j;
				}
			}
			if(min_index != i)
			{
				swap(arr[i], arr[min_index]);
			}
		}	
	}				
}

void insertion_sort(int arr[], int n)
{
	if (n < 2)
	{
		cout << "array is too small or already sorted." << endl;
	} else {
		for(int i = 1; i < n; i++)
		{
			for(int j = i; j > 0 && arr[j-1] > arr[j]; j--)
			{
				swap(arr[j],arr[j-1]);
			}
		}
	}
}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void print_array(int arr[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}