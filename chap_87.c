#include <stdio.h>
void main() {
    printf("RA2211042010009\n");
    int num_1 = 10, num_2 = 3, result1, result2;
    result1 = num_1 | num_2;
    result2 = num_1 ^ num_2;
    printf("Bitwise OR result = %d\n", result1);
    printf("Bitwise XOR result = %d\n", result2);
}
