Q:Write a program to calculate simple and compound interest for given principal, rate, and time ?
code:
#include <stdio.h>
#include <math.h>

int main()
{
    float p;
    float r;
    float t;
    float si;
    float ci;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest is = %f\n", si);
    printf("Compound Interest is = %f\n", ci);

    return 0;
}



question 2: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
code:
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
