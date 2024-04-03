#include <stdio.h>

#define CM_TO_DM 0.1

double cm_to_dm(double cm) {
    return cm * CM_TO_DM;
}

int main() {
    double length_cm, dm;

    printf("Enter the length in cm:");
    scanf("%lf", &length_cm);

    dm = cm_to_dm(length_cm);

      printf("%.2f cm is equal to %.2f dm. \n", length_cm, dm);

    return 0;
}