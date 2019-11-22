#include <iostream>
using namespace std;

void sort(int a[],int n){ 
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(a[i] < a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  } 
}
int count(int a[],int max,int size){
  sort(a,size);
  for(int i=0; i<size; i++){
    cout << a[i] <<" ";
  }
  int sum=0,count=0,i=0;
  while(sum+a[i] <max && i<size){
    sum+= a[i];
    i++;
    count++;
  }
  cout << count << endl;
  return count;
}
int main(){
  int t,size;
  cin >> t;
  int toys,max;
  for(int i=0;i<t;i++){
    cin >> toys >> max;
    int a[toys];
    for(int j=0; j<toys; j++)
    {
      cin>>a[j];
    }
    size = sizeof(a)/sizeof(a[0]);
    count(a,max,size);
  }

  return 0;
}

