#include <iostream>
using namespace std;

int main(){
  int a[] = {1, 2, 0, 0, 0, 3, 6};//{1, 2, 0, 4, 3, 0, 5, 0};
  int size = sizeof(a)/sizeof(a[0]);
  int i=0;
  int count = 0 ;
  while(i<size)
  {
    if(a[i]!=0)
      a[count++] = a[i];
    i++;
  }
  while (count < size)
  {
    a[count++] = 0;
  }
  for(i=0; i<size; i++){
    cout << a[i]<<" ";
  }

}