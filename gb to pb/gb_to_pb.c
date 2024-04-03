#include <stdio.h>

#define GB_TO_PB 0.000001

double gb_to_pb(double GB){
    return GB * GB_TO_PB;
}

int main(){
    double PB, GB;

    printf("Enter the amount of GB(s) you want to convert into PB(s):\n");
    scanf("%lf", &GB);

    PB = gb_to_pb(GB);

        printf("%.2f GB(s) is equal to %.2f PB(s)", GB, PB);

    return 0;
}