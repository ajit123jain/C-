#include <iostream>
using namespace std;

void rearrange(int a[],int size){
  int positive =0 ,negative =1;
  while (true)
  {
    while(positive < size && a[positive]>= 0)
      positive+=2;
    while(negative < size && a[negative] < 0 )
      negative+=2;
    if (positive < size && negative < size) 
        swap(a[positive], a[negative]); 
    else 
      break;
    
  }
}

int main(){
  int a[] = {1, -3, 5, 6, -3, 6, 7, -4, 9, 10};
  int size = sizeof(a)/sizeof(a[0]);
  rearrange(a,size);
  for(int i=0; i<size; i++){
    cout << a[i] << " ";
  }
  return 0;
}