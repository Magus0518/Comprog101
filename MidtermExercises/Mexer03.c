#include <stdio.h>

int main() {

double consumption, excess, totalbills;
const double kilowats = 50.00;
const double tax = 0.085; 
const double limit = 25.00;

    
printf("Enter the total kilowatt power consumption: ");
scanf("%lf", &consumption);

   
if (consumption > limit) {
        excess = consumption - limit;
} else {
        excess = 0;
}

   
totalbills = consumption * kilowats;
totalbills += totalbills * tax; 

   
printf("\nTotal Power Consumption: %.2f kWh", consumption);
printf("\nExcess Power Consumption: %.2f kWh", excess);
printf("\nTotal Electric Bills: P%.2f\n", totalbills);

return 0;
}

