#include "stdio.h"

int main() {
    unsigned char* dev_reg;
    dev_reg = 0x0000;
    // read
    printf("Value at 0x0000: %d\n", *dev_reg);
    *dev_reg = 0x08;
}