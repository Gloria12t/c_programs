/*Name:Gloria Thomas
Unumber:U33016687
The program uses linear search to search for an element in the array and displays the position of that element in the array
User is prompted to enter the number of input integers
Number is checked for validity. Program terminates if the user enters invalid number or 0.
an array is created with the length set by the user and the input numbers are stored into it.
user is prompted to enter a number to search for in the array.
if the number is found it is displayed with its index position in the array
if the number is not found a message is displayed
*/

#include <stdio.h>

int main(void) {
    
    while (1) {
        
        int n;
        printf("Enter the number of input integers (0 to stop): ");
        scanf("%d", &n); //store number in n
        
        if (n < 0) {//check for valid input
            printf("Invalid number\n\n");
            continue; // continue the loop to prompt the user again
        }
        
        if (n == 0) {
            break; // exit program
        }
        
        int a[n], b[n], index = 0; // declare arrays
        int *p, *q; // declare pointers to array a and b
        p = a; // initialize pointers
        q = b;

        printf("Enter numbers: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // store exactly n elements in array
        }
        while (getchar() != '\n'); // Clear the input buffer
        int number;
        printf("What is the search number? ");
        scanf("%d", &number);//search

        for (p = a; p < a + n; p++) {
            if (*p == number) {
                    *q = p - a; // Store the index of the element in array a
                    q++; // Move to the next position in array b
                    index++; // Increment the count
            }
        }

        if (index == 0) {
            printf("Not found: %d is not in the array.\n", number); // element not found; count has not increased
        } else {
            printf("Found: %d is in position", number); // formatting output with the indices of the element
            for (q = b; q < b + index; q++) { // access elements of array b
                if (q > b) {
                    printf(", %d", *q); // print index
                } else {
                    printf(" %d", *q); // Print the first index without leading comma
                }
            }
            printf(" in the array.\n");
        }

        printf("\n");
    }
    return 0; // end of the program
}
