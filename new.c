#include <stdio.h>

int main(void){
    float inches, centimeters;

    printf ("Input inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54f;

    printf ("you have %.2fcm", centimeters);

    return 0;
}