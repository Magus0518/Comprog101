#include <stdio.h>

int main () {

float yrds, ft, inch, m, cm;

printf("enter the lenght of cloth in yards:");
scanf("%f", &yrds);

ft = yrds * 3;
inch = ft *12;
cm = inch * 2.54;
m = cm / 100;

printf("lenght in foot: %.2f ft\n", ft);
printf("lenght in inches: %.2f inch\n", inch);
printf("lenght in meters: %.2f m\n", m);


return 0;
}

