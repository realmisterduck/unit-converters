#include <stdio.h>

#define MB_TO_BYTE 1000000

double mb_to_byte(double mb) {
    return mb * MB_TO_BYTE;
}

int main() {
    double mb, byte;

    printf("Please enter the amount of MB you want to convert into bytes:\n");
    scanf("%lf", &mb);

    byte = mb_to_byte(mb);

    printf("%.2f MB is equal to %.2f bytes in decimal.\n", mb, byte);

    return 0;
}