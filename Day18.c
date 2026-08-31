Q:Write a program to print all factors of a given number.
CODE:
#include <stdio.h>
int main(){
    int num;
    printf("wnter your number: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        if(num%i == 0){
            printf("%d,", i);
        }
    }
    return 0;

}

Q2:Write a program to find the HCF (GCD) of two numbers.
CODE:
#include <stdio.h>
int main(){
    int num1;
    int num2;
    int hcf =1 ;
    printf("enter you 1 number: ");
    scanf("%d",&num1);
    printf("wnter your 2 number: ");
    scanf("%d",&num2);
    
    for(int i=1; i<=num1 && i<=num2; i++) {
        if(num1 % i==0 && num2 % i==0){
            hcf = i;
        }
    }
    printf("the hcf of %d and %d is : %d\n", num1,num2,hcf);
     return 0;
     
}
