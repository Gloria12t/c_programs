/*Name:Gloria Thomas
Unumber:U33016687

This program intends to calculate the total pay based ont he pay rate and the number of hours worked 
The program has a main funtion and a while loop
the while loop chaecks for valid input and prompts the user to enter valid input 
if the number of hours worked is more than 40 then the pay for overtime is calculated and added to the gross pay
tax is calculated based on gross pay;10% for the first 300$, 15% for the next 150 and 20% for the restrict
total pay is the amount after tax 
*/


#include <stdio.h>

int main() {
    //initialize variables
    float num_hrs, pay_rate, over_time, overtime_pay, gross_pay, tax, total_pay;
    
    while (1) {
        printf("Enter the number of hours worked in the week (enter 0 to stop): ");
        scanf("%f", &num_hrs);
        //check for valid input 
        if (num_hrs == 0)
            break;
        else if (num_hrs < 0) {
            printf("Invalid number\n");
            continue;
        }

        printf("Enter the pay rate (per hour, enter 0 to stop): ");
        scanf("%f", &pay_rate);
        
        if (pay_rate == 0)
            break;
        else if (pay_rate < 0) {
            printf("Invalid number\n");
            continue;
        }
        //calculate gross pay based on overtime 
        if (num_hrs > 40) {
            over_time = num_hrs - 40;
            overtime_pay = over_time * pay_rate * 1.5;
            gross_pay = (40 * pay_rate) + overtime_pay;
        } else {
            gross_pay = num_hrs * pay_rate;
        }
        //calculate tax based on gross pay
        if (gross_pay <= 300)
            tax = gross_pay * 0.1;
        else if (gross_pay <= 450)
            tax = 300 * 0.1 + (gross_pay - 300) * 0.15;
        else
            tax = 300 * 0.1 + 150 * 0.15 + (gross_pay - 450) * 0.2;

        total_pay = gross_pay - tax;
        printf("Weekly pay (Gross): $%.2f\n", gross_pay);
        printf("Tax:$%.2f\n",tax);
        printf("Weekly pay (Net): $%.2f\n", total_pay);
    }
    
    return 0;
}
