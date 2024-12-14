#include <stdio.h>

int main() {
    
double sales, commission, grosspay;
const double regularS = 1000.00; 
const double commissionrate = 0.097; 

    
printf("Enter the total weekly sales in pesos: ");
scanf("%lf", &sales);

    
if (sales > 5000.00) {
        
	commission = sales * commissionrate;
} else {
        
    commission = 250.00;
}

   	
grosspay = regularS + commission;

  
printf("\nRegular Salary: P%.2f", regularS);
printf("\nWeekly Sales: P%.2f", sales);
printf("\nWeekly Commission: P%.2f", commission);
printf("\nWeekly Gross Salary: P%.2f\n", grosspay);

return 0;
}

