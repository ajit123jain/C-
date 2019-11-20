#include <iostream>
#include <string>
using namespace std;

string check(int p){
  if(p%2 == 0)
  return "even";
  else
  return "odd";
}
int main(){
  int a,b;
  string english[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cin >> a >> b;
  for(int i=a; i<=b; i++){
    if (i >= 1 && i <= 9){
      cout << english[i] << endl;
    }else
    {
      cout << check(i)  << endl;
    }
  }
}