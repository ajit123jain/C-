#include<iostream>
using namespace std;

int main(){
  int a[4][5] =  {{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15},
                {16,17,18,19,20}
                };
  int i =0, j=0,m=4,n=5;
  // while(i<m && j <n){
    int p=i,q=j;
    while(q<n){
      cout << a[p][q]<< " ";
      q++;
    }
    while(q == n && p<m){
      cout << a[p][q-1] << " ";
      p++;
    }  
  // }
  return 0;             
}