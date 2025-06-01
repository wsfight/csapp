#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0xFFFF;
    int b = 0x1111;
    int c = a & b;      // 按位与
    printf("%0x\n", c); // 0x1111
    printf("%d\n", c);  // 4369
    int d = a && b;     // 逻辑与
    printf("%0x\n", d); // 1
    return 0;
}