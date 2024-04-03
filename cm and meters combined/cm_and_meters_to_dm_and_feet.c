#include <stdio.h>

#define CM_TO_DM 0.1
#define DM_TO_M 0.1
#define METER_TO_FEET 3.28084

//functie voor cm naar dm
double cm_to_dm(double cm) {
    return cm * CM_TO_DM;
}

//functie voor dm naar m
double dm_to_m(double dm) {
    return dm * DM_TO_M;
}

//functie voor meter naar feet
double meters_to_feet(double meters) {
    return meters * METER_TO_FEET;
}

int main() {
    int choice;
    double meters, feet;
    double length_cm, dm;
    double dm_3, m;

    printf("Choose one of the following options: \n");
    printf("Option 1: meters to feet \n");
    printf("Option 2: cm to dm \n");
    printf("Option 3: dm to m \n");
    printf("Your selection:");
    scanf("%i", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter the length in meters:");
            scanf("%lf", &meters);

            feet = meters_to_feet(meters);

            printf("%.2f meters is equal to %.2f feet. \n", meters, feet);

            return 0;

        case 2:
            printf("Enter the length in cm:");
            scanf("%lf", &length_cm);

            dm = cm_to_dm(length_cm);

            printf("%.2f cm is equal to %.2f dm. \n", length_cm, dm);

            return 0;

        case 3:
            printf("Enter the length in dm:");
            scanf("%lf", &dm_3);

            m = cm_to_dm(dm_3);

            printf("%.2f dm is equal to %.2f m. \n", dm_3, m);

            return 0;

        default:

            printf("invalid choice.");
            return 0;
}
}