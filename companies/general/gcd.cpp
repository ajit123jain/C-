#include <iostream>
using namespace std;
int gcd(int a,int b)
{
  if(b>a)
  swap(a,b);
  if(b==0)
  return a;
  return gcd(b,a%b);

}
int main()
{
  cout << gcd(10,108);
  return 0;

}