#include<iostream>
int findLargest(int a[],int n){
  int first,second,third;
  first = second = third = INT_MIN;
  for(int i = 0;i<n; i++)
  {
    if(a[i]>first)
    {
      third = second;
      second = first;
      first = a[i];
    }
    else if(a[i]> second)
    {
      third = second;
      second = a[i];
    }
    else if(a[i] > third)
    {
      third = a[i];
      
    }
  }
  printf("Three largest elements are %d %d %d\n", first, second, third); 
  return 0;
}
int main()
{
  int a[] = {5,12,4,56,70,70,985};
  findLargest(a,sizeof(a)/sizeof(a[0]));
}