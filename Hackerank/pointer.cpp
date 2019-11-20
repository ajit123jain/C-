#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function  
    int p,q; 
     p= (*a + *b) ;
     q = abs(*a - *b);
     *a = p; *b =q;
}  

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

