#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n = 0;
    int sum = 0;
    int a = 0;

    scanf("%d", &n);
    int *arr = (int*)malloc(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[i] = a;
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}

