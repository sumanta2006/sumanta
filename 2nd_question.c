#include <stdio.h>
int main() {
    float pi = 3.14;
    float *ptr = &pi;
    printf("Float value: %f\n Address= %u", *ptr, ptr);
    return 0;
}
