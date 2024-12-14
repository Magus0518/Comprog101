#include <stdio.h>

int main () {

float DSP, Oprice;

printf("enter the discounted price:");
scanf("%f", &DSP);

Oprice = DSP / 0.85;

printf("The Original price is: %.2f\n", Oprice);



return 0;
}

