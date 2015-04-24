//
//  C++ Array Parser
//
//  Created by Don Mclean on 11/25/13.
//  Copyright (c) 2013 Don Mclean. All rights reserved.
//

#include <iostream>
using namespace std;

//prints your array of integer elements
void print_array(int a[], int size);

//gets the minimum of your array of integer elements
int find_minimum(int a[], int size);

//gets the maximum of your array of integer elements
int find_maximum(int a[], int size);

//gets the average of your array of integer elements
double compute_average(int a[], int size);

//gets the sum/total of your array of integer elements
double total(int a[], int size);

//gets the amount of even numbers in your array of integer elements
int how_many_evens(int a[], int size);

//gets the amount of odd numbers in your array of integer elements
int how_many_odds(int a[], int size);

//Global Integer Array
int a[] = { 3, 5, 8, 2, 4, 2, 7, 6, 3, 15 };

int main()
{
	
	// get size of array elements;
	int size = sizeof(a)/sizeof(int);
	cout << "The size of the array is " << size << endl << endl;

    print_array(a, size);
    cout << "The minimum is " << find_minimum(a, size) << endl;
	cout << "The maximum is " << find_maximum(a, size) << endl;
    cout << "The average is " << compute_average(a, size) << endl;
	cout << "The total is " << total(a, size) << endl;
    cout << "There are " << how_many_evens(a, size) << " even numbers." << endl;
	cout << "There are " << how_many_odds(a, size) << " odd numbers." << endl;

    return 0;
}


void print_array(int a[], int size)
{
	cout << "its elements are: " << endl;
	
	for(int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] is " << a[i] << endl;
    }
}

int find_minimum(int a[], int size)
{
	int minimum, current_min;
	current_min = a[0];
	
	if (size == 0) {
		return 0;
	} 
	
	else if(size == 1)
	{
		minimum = a[0];
	} else {
		for(int i = 0; i < size; i++)
		    {
				if(current_min > a[i])
				{
					current_min = a[i];
				}      
		    }
		minimum = current_min;
	}

    return minimum;
}

int find_maximum(int a[], int size)
{
	int maximum, current_max;
	current_max = a[0];
	
	if (size == 0) {
		return 0;
	} 
	
	else if(size == 1)
	{
		maximum = a[0];
	} else {
		for(int i = 0; i < size; i++)
		    {
				if(current_max < a[i])
				{
					current_max = a[i];
				}      
		    }
		maximum = current_max;
	}

    return maximum;
}

double compute_average(int a[], int size)
{
	int total = 0;
	    
	for (int i = 0; i < size; i++) {
		total += a[i];
	}
	
    return total/size;
}

double total(int a[], int size)
{
	int total = 0;
		    
	for (int i = 0; i < size; i++) {
		total += a[i];
	}
		
	return total;
}

int how_many_evens(int a[], int size)
{
    int even = 0;
	
	for (int i = 0; i < size; i++) {
		if(a[i] %2 == 0)
		{
			even++;
		}
	}	
	
    return even;
}

int how_many_odds(int a[], int size)
{
	return size - how_many_evens(a, size);
}
    
