#include <iostream>
using namespace std;
int main()
{
  int i,t;
  //cout << "No of test cases?";
  cin >> t;
  for(i=0; i<t; i++){
    int n,sum;
    cin >> n >> sum;
    int a[n],flag=0;
    for (int j = 0; j < n; j++)
    {
      cin >> a[j];
    } 
    int start = 0,end=0,current_sum=0;
    for (int j = 0; j < n; j++)
    {
      current_sum+= a[j];
      end++;
      if(current_sum == sum)
        {
          cout << start+1 << " "<< end;
          flag = 1;
        } 
      else   
      if(current_sum > sum){
        while(start < j && current_sum > sum ){
          current_sum -=a[start];
          start++;
          if(current_sum == sum){
            cout << start+1 << " "<< end;
            flag = 1;
            break;
          }
          
        }
      }
      if(flag == 1)
      break;
      if(j == n-1 && flag == 0)
      cout << "-1";
      // cout << start+1 << " "<<end <<" " << current_sum <<endl;   
    }  
    cout << "\n" ;
  }
}
