#include <iostream>
#include <array>

using namespace std;

//Question [2]: Given an array of integers, determine whether or not there exist 
//two elements in the array (at different positions) whose sum 
//is equal to some target value.

//Examples:
//[5, 4, 2, 4], 8 --> true
//[5, 1, 2, 4], 8 --> false


bool nums_equals_sum (int arr[], int target_value);

int main(int argc, char *argv[]) {
	string answer [] = {"false","true"};
	
	//Example:
	//[5, 4, 2, 4], 8 --> true
	int arr [] = {5, 4, 2, 4};
	int target = 8;
	
	//[5, 1, 2, 4], 8 --> false
	int arr2 [] = {5, 1, 2, 4};
	int target2 = 8;
	
	//Question 1 answer:
	cout << "Question 1 answer: " << answer[nums_equals_sum(arr, target)] << endl;
	
	//Question 2 answer:
	cout << "Question 2 answer: " << answer[nums_equals_sum(arr2, target2)] << endl;
	
}

bool nums_equals_sum (int arr[], int target_value) {
	
	int size = 4; //size of array! can be dynamic if using a list.
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] + arr[j] == target_value) {
				return true;
			}
		}
	}
	return false;
}
