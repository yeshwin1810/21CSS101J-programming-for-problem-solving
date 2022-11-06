#include <stdio.h>
int main() {
    printf("RA2211042010009\n");
    short int i = 20;
    char c = 97;
    printf("%zu, %zu, %zu\n", sizeof(i), sizeof(c), sizeof(c + i));
    return 0;
    
}
