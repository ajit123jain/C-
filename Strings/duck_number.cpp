#include <iostream> 
#include <string.h> 
using namespace std; 

int check_duck( char *num) 
{ 
	int len = strlen(num); 
	int count_zero = 0 ; 
	char ch; 
	for(int i = 1;i < len ;i++) 
	{  
		ch=num[i]; 
		if(ch=='0') 
			count_zero++; 
	} 
	return count_zero ; 
} 
int main(void) 
{ 
	char num1[] = "02203"; 
	char first_digit1 = num1[0]; 

	if( check_duck(num1) > 0 && first_digit1 != '0') 
		cout << "It is a duck number\n"; 
	else
		cout <<"It is not a duck number\n"; 
	
	return 0; 
}
