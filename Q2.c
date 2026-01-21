#include<stdio.h>
unsigned char modiregiister(unsigned char reg)
{
    reg |= (1 << 2);
    reg &= ~( 1 << 5);
    reg ^= (1 << 0);
    return reg;
}
 int main()
 {
    unsigned char reg= 0x10;
    unsigned char result = modiregiister(reg);
    printf("original: 0x%02X\n", reg);
    printf("modified: 0x%02X\n", result);
    return 0;
 }