 First question is to remove duplicates from array and print back the non duplicate element containing array

#include <iostream>#include <vector>#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int* a, int size) {
	vector<int> output;
	unordered_map<int, bool> seen;
	for (int i = 0; i < size; i++) {
		if (seen.count(a[i]) > 0) {
			continue;
		}
		// if we have seen a number we will just continue which means jusp skip that number
		seen[a[i]] = true;
		output.push_back(a[i]);
	}
	return output;
}

int main() {
	int a[] = {1,2,3,3,2,1,4,3,6,5,5};
	vector<int> output = removeDuplicates(a, 11);
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}

//dry run
//i/p is 1 2 1 2 3 
//map
//1-->true
//2-->true
//1-->its greater than 0 so we do i++;
//2--> same as above
//3-->true

Q2 Find all duplicates in array and print them



.
  


















//Second question is to print all duplicate elements of array
