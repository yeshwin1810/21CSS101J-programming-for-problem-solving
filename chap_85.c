#include <stdio.h>
void main() {
    printf("RA2211042010009\n");
    int a = 2, b = 3, c = 4;
    a = 7 + (b = 8 +( c = 2)) - 4;
    printf("%d %d %d\n", a, b , c);
}
