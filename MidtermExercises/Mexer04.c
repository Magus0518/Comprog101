#include <stdio.h>

int main() {
    
int amount1; 
int amount2; 
int amount3; 
int largestamount;

    
printf("Enter three integers: ");
scanf("%d %d %d", & amount1, & amount2, & amount3);
	
    
if (amount1 >=  amount2) 
{
if (amount1 >=  amount3) 
{
 largestamount =  amount1;  
} 
else {
    largestamount =  amount3;  
}

} else {

if ( amount2 >=  amount3) {
 largestamount =  amount2;  
} else {
  largestamount =  amount3;  
   }

}

    
printf("The largest number amount is: %d\n", largestamount);

return 0;
}

