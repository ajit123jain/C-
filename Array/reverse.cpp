#include<iostream>
using namespace std;

int main(){
  int n; 
  cout << "enter array size?" ;
  cin >> n;
  int a[n]; 
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
  }
  int start = 0 ,end = (sizeof(a)/sizeof(a[0]))-1;
  while(start < end )
  {
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    start++;
    end--;
  }
  cout << "Array Length "<< sizeof(a)/sizeof(a[0]);
  for(int i=0; i<n; i++)
  {
    cout << a[i];
  }
  return 0;
}