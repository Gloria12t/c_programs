/*Name: Gloria Thomas
Unumber:U33016687

This program intends to find all possible ineteger values for the pythogorean triples for a maximum hypotenuse length 
The program contains only a main funtion 
while loop is used to check for valid inputs. If the input is valid it passes to for loop to generate the triples
If the input is not valid the while loop prompts the user to enter a valid input 
The for loop part first iterates over the possible values of hypotenuse under the given length
The other loops iterates over possible values for the other two sides
If statement inside the for loop checks whether the value generated satisfy the pythogorean equation 

*/


#include <stdio.h>
int main() {
    int h; //initialize variable
    while (1) //loop to check for valid input 
    {
        printf("Enter a length of hypothenuse (enter 0 to stop): ");
        scanf("%d", &h);
        if (h == 0)
            break;
        else if (h <= 4) {
            printf("Enter an integer larger than 4.\n");
            continue;
    }
        //loop to identify triples 
        for (int n3 = 1; n3 <= h; n3++) 
        {
            for (int n1 = 1; n1 < n3; n1++) 
            {
                for (int n2 = n1; n2 < n3; n2++) 
                {
                    //condition to check if pythogorean equation is satisfied
                    if (n1 * n1 + n2 * n2 == n3 * n3) 
                    {
                        //prints two possible outcomes
                        printf("a=%d, b=%d, c=%d\n", n1, n2, n3);
                        printf("a=%d, b=%d, c=%d\n", n2, n1, n3);
                    }
                }
            }
        }
    }

    return 0;
}
