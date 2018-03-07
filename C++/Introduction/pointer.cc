#include <stdio.h>
#include <cmath>
void update(int *a,int *b) {
    // Complete this function 
    int ap = *a + *b;
    int bp = abs(*a-*b);
    *a = ap;
    *b = bp;
    return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
