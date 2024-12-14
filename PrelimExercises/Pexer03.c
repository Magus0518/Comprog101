#include <stdio.h>

int main() 
{

int inputOprice, inputTenderedAmount;
float Oprice, TenderedAmount, Change;
int ChangeinCents;
int denomination20, denomination10, denomination5, denomination1;
int cent25, cent10, cent5;

printf("enter the price of the item: ");
scanf("%d", &inputOprice);
printf("enter the tendered amount: ");
scanf("%d", &inputTenderedAmount);

Oprice = inputOprice / 100.0;
TenderedAmount = inputTenderedAmount / 100.0;

Change = TenderedAmount - Oprice;
printf("item price: %.2f\n", Oprice);
printf("tendered amount: %.2f\n", TenderedAmount );
printf("Change: %.2f\n\n", Change);

ChangeinCents = (int)(Change * 100 + 0.5);
denomination20 = ChangeinCents / 2000;

ChangeinCents %= 2000;
denomination10 = ChangeinCents / 1000;

ChangeinCents %= 1000;
denomination5 = ChangeinCents / 500;

ChangeinCents %= 500;
denomination1 = ChangeinCents / 100;

ChangeinCents %= 100;
cent25 = ChangeinCents / 25;

ChangeinCents %= 25;
cent10 = ChangeinCents / 10;

ChangeinCents %= 10;
cent5 = ChangeinCents / 5;

ChangeinCents %= 5;

printf("Coin Denomination\n");
printf("20.00 pesos = %d\n", denomination20);
printf("10.00 pesos = %d\n", denomination10);
printf("5.00 pesos  = %d\n", denomination5);
printf("1.00 pesos  = %d\n", denomination1);
printf("0.25 cents  = %d\n", cent25);
printf("0.10 cents  = %d\n", cent10);
printf("0.05 cents  = %d\n", cent5);

return 0;
}

