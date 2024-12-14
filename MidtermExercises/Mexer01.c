#include <stdio.h>

int main() {
int distance;
double fare = 20.00;

printf("Input the distance that measured in meters: ");
scanf("%d", &distance);

if (distance > 300) {
int extraD = distance - 300;
int increments = (extraD + 199) / 200; 
fare += increments * 2.00;
fare -= 2.00;
}

printf("P %.2f\n", fare);

    return 0;
}

