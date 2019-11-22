#include<iostream> 
using namespace std; 

void findElements(int arr[], int n) 
{ 
	sort(arr, arr + n); 
	for (int i = 0; i < n - 2; i++) 
	cout << arr[i] << " "; 
} 

// Driver Code 
int main() 
{ 
	int arr[] = { 2, -6 ,3 , 5, 1}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	findElements(arr, n); 
	return 0; 
} 
