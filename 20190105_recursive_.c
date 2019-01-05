#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.

  int sum = 0;
  int x;

  int count = 3;
  
  if (n == 1)
    { return a; }
  else if (n == 2)
    { return b; }
  else if (n == 3)
    { return c; }
  else if (n == 0)
    { return 0; }
  else if (n >= 4)
    {
      for (int j = 1; j <= count; j++)
      {
        x = find_nth_term(n-j, a, b, c);
        sum += x;
      }

      return sum;
    }
    else
    { return 0; }

  return 0;
} 

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

