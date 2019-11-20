#include <iostream>
#include <string>
using namespace std;

int main(){
  int a;
  string english[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cin >> a;
  if (a >= 1 && a <= 9){
    cout << english[a] << endl;
  }else
  {
    cout << "Greater than 9" << endl;
  }
}