#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cout << "Write a string for reverse.";
  cin >> str;
  cout << "String length:  " << str.length();
  int start = 0 ,end = (str.length()-1);
  while(start < end )
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
  cout<< str << endl;
  return 0;
}