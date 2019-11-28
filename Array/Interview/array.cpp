#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Please give array size.";
  cin >> n ;
  int i,a[n];
  for(i=0; i<n;i++){
    cin >> a[i];
  }
  for(i=0; i<n;i++){
    cout << a[i];
  }
}
