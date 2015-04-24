//Don Mclean
//Using the Count Algorithm

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char *argv[]) {
	
	int arr[] = {2,2,3,4,5,6,7,8,2,3};

	
	//GETS THE SIZE OF ARRAY!!!
	int arrsize = sizeof(arr)/sizeof(arr[0]);
		
	vector<int> varr (arr,arr + sizeof(arr)/sizeof(int));
	
	int tally[arrsize];
	
	for (int i = 0; i < arrsize; i++) {
		tally[i] = count(varr.begin(), varr.end(), varr[i]);
		cout << "Array number: " << varr[i] << "  Frequency: " << tally[i] << endl;
	}
	cout << endl;
	vector<int> vtally (tally,tally + sizeof(tally)/sizeof(int));
	
	//USES C++ ALGORITHM FUNCTIONS (MIN_ELEMENT & MAX_ELEMENT) 
	int min = *min_element(arr,arr+arrsize);
	int max = *max_element(arr,arr+arrsize);
	int max_freq = *max_element(tally,tally+arrsize);;
	int most_freq = *find(varr.begin(), varr.end(), max_freq);
	
	for (int i = 0; i < arrsize; i++) {
		if (count(varr.begin(), varr.end(), varr[i]) == max_freq) {
			most_freq = varr[i];
		}
	}
	
	cout << "The minimum is: " << min << endl;
	cout << "The maximum is: " << max << endl;
	cout << "The most frequent number is: " << most_freq << ". it occurred "<< max_freq << " times" << endl;
	
	return 0;
}

