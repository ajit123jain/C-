#include<iostream>
using namespace std;
int main(){
  int a[] = {1,2,5,8,3,4,10,7};
  int n = sizeof(a)/sizeof(a[0]);
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n; j++){
      if(a[i] < a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  } 
  for(int i=0; i<n-1; i++){
    cout << a[i]<< " ";
  }    
}