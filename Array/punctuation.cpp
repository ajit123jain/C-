// CPP program to remove punctuation from a given string 
#include <iostream> 
#include <string>
using namespace std; 

int main() 
{ 
	string str = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks"; 
	for (int i = 0, len = str.size(); i < len; i++) 
	{ 
		// check whether parsing character is punctuation or not 
		if (ispunct(str[i])) 
		{ 
			str.erase(i--, 1); 
			len = str.size(); 
		} 
	} 
  cout << str; 
	return 0; 
} 
