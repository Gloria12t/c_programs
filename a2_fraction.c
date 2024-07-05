/*
The program intends to reduce the given fraction to its lowest terms 
While loop checks for valid input and prompts the user to enter valid input
The program finds the greates common divisor for the two numbers and then reduces the fraction to its lowest terms
*/

#include <stdio.h>
int main() {
    int num, denom;   //initialize variables
    while (1) {     //iterates until a valid input is given
        printf("Enter a fraction (enter 0 to stop): ");
        scanf("%d/%d", &num, &denom);    //gets two inputs from the fraction
        
        if (num == 0 || denom == 0) { 
            break;
        }
        
        int a = num, b = denom;  //calcualte gcd
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;
        
        num /= gcd;     // Reduce fraction by dividing by GCD
        denom /= gcd;

        if (denom < 0) { // for negative fractions 
            num *= -1;
            denom *= -1;
        }
        
        if (denom == 1) {
            printf("In lowest terms: %d\n", num);
        } else {
            printf("In lowest terms: %d/%d\n", num, denom);
        }
    }
    
    return 0;
}
