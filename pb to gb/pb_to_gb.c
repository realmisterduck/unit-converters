#include <stdio.h>

#define PB_TO_GB 1000000

double pb_to_gb(double PB){
    return PB * PB_TO_GB;
}

int main(){
    double PB, GB;

    printf("Enter the amount of GB(s) you want to convert into PB(s):\n");
    scanf("%lf", &PB);

    GB = pb_to_gb(PB);

        printf("%.2f PB(s) is equal to %.2f GB(s)", PB, GB);

    return 0;
}