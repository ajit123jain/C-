int a[5][4] =  {{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15},
                {16,17,18,19,20}
                }

  output =             1,2,3,4,5,10,15,20,19,18,17,16,11,6,7,8,9,14,13,12

  int i =0, j=0;
  int a[m][n];
  int b[m][n] =  {0} //with all zeros
  while(i<m && j <n){
    int p =i,q=j;
    while(q<m){
      cout << a[p][q]<< " ";
      q++;
    }
    while(q == j && p<m){
      cout << a[p][q-1]
      p++;
    }
    
  }