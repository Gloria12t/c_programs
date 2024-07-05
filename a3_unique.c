
//The program gets the user input for a number between 0 to 200.
//the program asks for the number of inputs 
//if the number is negative the program prints invalid number and prompts the user to enter a different input 
//if number is not between 0 and 200 the program prompts the user to input more numbers until the number of valid digits is reached
//the input is stored in an array. numbers are compared with each other to check for duplicate elements 
//the program prints the unique numbers

#include <stdio.h>
#define MAX 1000
// to clear the input buffer 
void clear() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(void) {
    //the program is written inside a loop to repeat the program to prompt the user to input numbers again 
    while (1) {
        int input_number, valid_number = 1;//declaration and initialization
        printf("Enter the number of input integers (0 to stop): ");//prompt user input 
        if (scanf("%d", &input_number) != 1) {//store input and check for validity
            printf("Invalid input format\n");
            clear();//clear input buffer
            continue;}//continue to ask for another input 
        if (input_number == 0) {
            return 0;//stop the program if the user enters 0
        }
        //check for input validity if the number is negative
        while (input_number < 0) {
            printf("Invalid number\n");
            printf("Enter the number of input integers (0 to stop): ");
            if (scanf("%d", &input_number) != 1) {
                printf("Invalid number\n");
                clear();
                continue;
            }
            if (input_number == 0) 
                return 0;
        }
        int a[MAX],count_numbers= 0; // To track the number of valid inputs
        printf("Enter numbers (0-200): ");//print the statement before loop execution
        while (count_numbers < input_number) {
            int n2;//declare a duplicate variable 
            if (scanf("%d", &n2) != 1) {
                printf("Invalid number\n");
                clear();
                break;
            }
            if (n2 < 0 || n2> 200) //check if the number is between range
            {
                printf("%d: invalid and ignored\n", n2);
            } 
            else {
                a[count_numbers++] = n2; //add number to array
            }
        }
        clear(); // Clear the buffer after reading all numbers
        printf("Unique numbers: ");
        
        int first_occurrence = 1;
        //compare array elements for duplicate elements
        for (int element = 0; element < count_numbers; element++) {
            valid_number = 1;
            for (int element2 = 0; element2 < element; element2++) {
                if (a[element] == a[element2]) {
                    valid_number = 0;
                    break;
                    }
            }
            //formatting output statement based on the element's position
            if (valid_number) {
                if (!first_occurrence) {
                    printf(", ");
                }
                printf("%d", a[element]);
                first_occurrence = 0;
              }
           }
             printf("\n");//starts newline after the first execution 
     }
   return 0;
}
