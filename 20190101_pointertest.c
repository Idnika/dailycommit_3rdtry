#include <stdio.h>

void update(int *a,int *b) {
    int da, db;
    
    da = *a + *b;
    db = *a - *b;

    if (db < 0) {
        db = db * (-1);
    }   

    *a = da;
    *b = db;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

