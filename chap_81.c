#include <stdio.h>
void main() {
    int a = 10, b;
    b = a++ + ++a;
    printf("%d %d\n", a, b);
}
