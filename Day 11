Q:Write a program to display the month name and number of days using switch-case for a given month number.
CODE:
#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
  
    switch (month) {
        case 1:
            printf("Month: January, Days: 31\n");
            break;
        case 2:
            printf("Month: February, Days: 28 or 29 (Leap Year)\n");
            break;
        case 3:
            printf("Month: March, Days: 31\n");
            break;
        case 4:
            printf("Month: April, Days: 30\n");
            break;
        case 5:
            printf("Month: May, Days: 31\n");
            break;
        case 6:
            printf("Month: June, Days: 30\n");
            break;
        case 7:
            printf("Month: July, Days: 31\n");
            break;
        case 8:
            printf("Month: August, Days: 31\n");
            break;
        case 9:
            printf("Month: September, Days: 30\n");
            break;
        case 10:
            printf("Month: October, Days: 31\n");
            break;
        case 11:
            printf("Month: November, Days: 30\n");
            break;
        case 12:
            printf("Month: December, Days: 31\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }
    
    return 0;
}

Q:Write a program to find profit or loss percentage given cost price and selling price.
CODE:
#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
