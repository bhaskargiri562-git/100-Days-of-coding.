Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
code:
#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Library Fine = Rs.%d", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Library Fine = Rs.%d", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Library Fine = Rs.%d", fine);
    }
    else {
        printf("Membership Cancelled.");
    }

    return 0;
}
Q24 (Conditional Statements)
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
code:
#include <stdio.h>

int main() {
    int units, bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Bill: Rs.%d", bill);

    return 0;
}
