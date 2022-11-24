#include <stdio.h>
int main() {
    printf("RA2211042010009\n");
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    
    printf("%d", *pc); 
}
