#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.

  int sum = 0;
  
  if (n = 1)
  { return a + b; }
  else if (n = 2)
  { return a + b; }
  else if (n = 3)
  { return a + b + c; }
  else if (n = 0)
  { return 0; }
  else
  {
      sum = find_nth_term(n-1);
  } 

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

