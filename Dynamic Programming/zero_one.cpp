#include <iostream>
using namespace std;
int max_weight(int w,int n,int weight[],int value[])
{
  int max_weight = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(weight[i] > weight[j])
      {
        swap(weight[i],weight[j]);
      }
    }
  }
  for(int i=0; i<n; i++){
    cout << weight[i] << " ";
  }
  int i =0,remaining_weight = w,count=0;
  while (max_weight < w && i<n)
  {
    count = remaining_weight/weight[i];
    if(value[i] < count){
      max_weight+= weight[i]*value[i];
    }
    else
    {
      max_weight+= weight[i]*count;
    }
    remaining_weight = w -max_weight;
    i++;
  }
  return max_weight;
}
int main()
{
  int n,w;
  cin >> n >> w;
  int weight[n],value[n];
  for(int i=0; i<n; i++){
    cin >> weight[i] >> value[i];
  }
  cout << max_weight(w,n,weight,value);
  return 0;
}