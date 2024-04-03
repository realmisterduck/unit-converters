// standaard I/O library voor I/O operations
#include <stdio.h>

// werkt als een alias, je geeft een naam en dan bij het compilen word de naam veranderd naar het nummer
#define METER_TO_FEET 3.28084

// functie voor het coverteren van meters naar feet
// double is een datatype zoals int, float en char
// meters_to_feet is de naam van de functie
// (double meters) zijn de parameters van de functie dus 1 parameter die meters heet en datatype double is
// {} de inhoud van de functie
// return meters * METER_TO_FEET; geeft het resultaat van parameter meters keer 3.28084
double meters_to_feet(double meters) {
    return meters * METER_TO_FEET;
}

// datatype int, functie naam main zonder parameters
int main(){
    double meters, feet;

    printf("Enter the length in meters:");
    // %lf is de format van wat er ingetypt kan worden l is voor long en f is voor float
    // &meters zorgt ervoor dat wat ingevuld word ook opgeslagen word in de meters variabel
    scanf("%lf", &meters);

    feet = meters_to_feet(meters);

    // door .2 komt er 1.23 en niet 1.234
    // % is voor het speciferen van het format
    // f is voor floating-point number
    // meters en feet na de tekst zijn voor de data als je deze zou veranderen komt de data ook andersom te staan
    printf("%.2f meters is equal to %.2f feet. \n", meters, feet);

    // laat het systeem weten dat het programma successvol is gesloten
    return 0;
}