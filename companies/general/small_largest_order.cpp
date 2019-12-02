// Rearrange element smallest largest and 2n smallest and 2nd largest
#include<iostream>
using namespace std;
int main()
{
  int a[] = {1,2,3,4};
  int size = sizeof(a)/sizeof(a[0]);
  sort(a,a+size);
  int b[size];
  int start = 0,end = size-1;
  for(int i=0; i<size; i++){
    if(i%2==0){
      b[i] = a[start];
      start++;
    }
    else{
      b[i] = a[end--];
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << b[i]<<" ";
  }
  
  return 0;
}