#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int i,array[50];
  array[1]=a;
  array[2]=b;
  array[3]=c;
  for(i=4;i<=n;i++)
  {
      array[i]=array[i-1]+array[i-2]+array[i-3];
  }
  return array[n];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}