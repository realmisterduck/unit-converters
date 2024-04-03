#include <stdio.h>

#define PB_TO_GB 1000000
#define GB_TO_PB 0.000001

double pb_to_gb(double PB){
    return PB * PB_TO_GB;
}

double gb_to_pb(double GB){
    return GB * GB_TO_PB;
}

int main(){
    int choice;
    double PB, GB;
    double PB1, GB1;

    printf("Please choice one of the options below:\n");
    printf("1: PB to GB\n");
    printf("2: GB to PB\n");
    printf("Your selection:");
    scanf("%i", &choice);

    switch(choice){
        case 1:
            printf("Enter the amount of GB(s) you want to convert into PB(s):\n");
            scanf("%lf", &PB);

            GB = pb_to_gb(PB);

                printf("%.2f PB(s) is equal to %.2f GB(s)", PB, GB);

            return 0;
        
        case 2:
            printf("Enter the amount of GB(s) you want to convert into PB(s):\n");
            scanf("%lf", &GB1);

            PB1 = gb_to_pb(GB1);

                printf("%.2f GB(s) is equal to %.2f PB(s)", GB1, PB1);

            return 0;

        default:
            printf("Invalid choice");
            return 0;
    }
}