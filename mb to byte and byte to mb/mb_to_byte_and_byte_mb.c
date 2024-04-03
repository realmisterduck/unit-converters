#include <stdio.h>

#define MB_TO_BYTE 1000000
#define BYTE_TO_MB 0.000001

double mb_to_byte(double mb) {
    return mb * MB_TO_BYTE;
}


double byte_to_mb(double byte1) {
    return byte1 * BYTE_TO_MB;
}


int main() {
    int choice;
    double mb, byte;
    double byte1, mb1;

    printf("Choose one of the following options: \n");
    printf("1: MB to byte.\n");
    printf("2: byte to MB.\n");
    printf("Your selection:");
    scanf("%i", &choice);


    switch(choice){
        case 1:
            printf("Please enter the amount of MB you want to convert into bytes:\n");
            scanf("%lf", &mb);

            byte = mb_to_byte(mb);

            printf("%.2f MBs are equal to %.2f bytes in decimal.\n", mb, byte);

            return 0;

        case 2:
            printf("Please enter the amount of bytes you want to convert into MBs:\n");
            scanf("%lf", &byte1);

            mb1 = byte_to_mb(byte1);

            printf("%.2f bytes are equal to %.2f MBs in decimal.\n", byte1, mb1);

            return 0;

        default:
            printf("invalid choice.");
            return 0;

    }
}