// C++ implementation to find first 
// element occurring k times 
#include <iostream> 
#include <unordered_map>
using namespace std; 

// function to find the first element 
// occurring k number of times 
int firstElement(int arr[], int n, int k) 
{ 
	// unordered_map to count 
	// occurrences of each element 
	unordered_map<int, int> count_map; 
	for (int i=0; i<n; i++) 
		count_map[arr[i]]++; 
	
	for (int i=0; i<n; i++) 

		// if count of element == k ,then 
		// it is the required first element 
		if (count_map[arr[i]] == k) 
			return arr[i]; 
			
	// no element occurs k times 
	return -1; 
} 

// Driver program to test above 
int main() 
{ 
	int arr[] = {4, 1, 6, 1, 6, 4}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int k = 1; 
	cout << firstElement(arr, n, k); 
	return 0; 
} 
