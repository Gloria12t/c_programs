//Name:Gloria Thomas
//Unumber:U33016687
//The program asks for the user to input a message and then encrypts it using caesar cipher technique
//the program asks for number of shifts
//The program can decrypt the message if the user enters 26 minus the original key
//the maximum length of the array is 150. 
//while loop is used to repeat the program to prrompt for use input again. for loop is used to encrypt message

#include <stdio.h>
#define LIMIT 151 //150+ 1 to accomodate the null terminator

int main(void) {
    char encrypt[LIMIT];int shift; //array inilitalization
    while (1) {
        printf("Enter message to be encrypted: ");
        int length = 0; char s; 
        while ((s = getchar()) != '\n' && s != EOF) {
            // check for space
            if (length < LIMIT - 1) {
                //store character in array
                encrypt[length++] = s;
            }
        }
        encrypt[length] = '\0'; // Ensure the string is null-terminated
        if (length == 0) { // empty
            break; // exit loop
        }
        // Read the shift amount
        printf("Enter shift amount (1-25, enter 0 to stop): ");
        scanf("%d", &shift);
        getchar(); // Consume the newline character left in the input buffer
        if (shift == 0) { // Check if user wants to stop
            break;
        }
        // Encrypt the message
        printf("Encrypted message: ");
        for (int element = 0; element < length; element++) {
            char ch1 = encrypt[element];
            if (ch1 >= 'a' && ch1 <= 'z') {
                ch1 = 'a' + (ch1 - 'a' + shift) % 26; // lower case
            } 
            else if (ch1 >= 'A' && ch1 <= 'Z') {
                ch1 = 'A' + (ch1 - 'A' + shift) % 26; //upper case
            }
            printf("%c", ch1);//print each character
        }
        printf("\n");//start new line for the next input
    }
    return 0;
}
