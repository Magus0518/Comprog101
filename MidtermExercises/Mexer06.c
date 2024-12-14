#include <stdio.h>

int main()
{
    int locationCode, periodCode, callLength;
    double ratePerMinute, finalCost;

    printf("Input the Location Code (1: American Region, 2: Asian Region, 3: African Region, 4: European Region): ");
    scanf("%d", &locationCode);
    printf("Input the Period Code (1 for day, 2 for night): ");
    scanf("%d", &periodCode);
    printf("Input the call length in minutes: ");
    scanf("%d", &callLength);

    if (periodCode == 1) {
        if (locationCode == 1) {
            ratePerMinute = 50.0 / 3;
        } else if (locationCode == 2) {
            ratePerMinute = 30.0 / 2;
        } else if (locationCode == 3) {
            ratePerMinute = 40.0 / 3;
        } else if (locationCode == 4) {
            ratePerMinute = 35.0 / 2;
        } else {
            printf("Invalid location code.\n");
            return 1;
        }
    } else if (periodCode == 2) {
        if (locationCode == 1) {
            ratePerMinute = 45.0 / 3;
        } else if (locationCode == 2) {
            ratePerMinute = 27.0 / 2;
        } else if (locationCode == 3) {
            ratePerMinute = 36.0 / 3;
        } else if (locationCode == 4) {
            ratePerMinute = 30.0 / 2;
        } else {
            printf("Invalid location code.\n");
            return 1;
        }
    } else {
        printf("Invalid period code.\n");
        return 1;
    }

    finalCost = ratePerMinute * callLength;

    if (locationCode == 1) {
        printf("You've chosen American region, and you've chosen %s time and the call length you input is %d minutes.\n", periodCode == 1 ? "day" : "night", callLength);
    } else if (locationCode == 2) {
        printf("You've chosen Asian region, and you've chosen %s time and the call length you input is %d minutes.\n", periodCode == 1 ? "day" : "night", callLength);
    } else if (locationCode == 3) {
        printf("You've chosen African region, and you've chosen %s time and the call length you input is %d minutes.\n", periodCode == 1 ? "day" : "night", callLength);
    } else if (locationCode == 4) {
        printf("You've chosen European region, and you've chosen %s time and the call length you input is %d minutes.\n", periodCode == 1 ? "day" : "night", callLength);
    }

    printf("So the total charge is: P %.2lf\n", finalCost);

    return 0;
}

