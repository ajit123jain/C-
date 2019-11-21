#include<iostream>
int secondLargest(int a[],int n){
  int first,second;
  first = second = INT_MIN;
  for(int i = 0;i<n; i++)
  {
    if(a[i]>first)
    {
      second = first;
      first = a[i];
    }
    else if(a[i]> second)
    {
      second = a[i];
    }
  }
  printf("Second largest element is %d\n", first, second); 
  return 0;
}
int main()
{
  int a[] = {5,12,4,56,70,70};
  secondLargest(a,sizeof(a)/sizeof(a[0]));
}