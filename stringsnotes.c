#include <stdio.h>
#include <string.h>

int num_char(char *s);
void concatenate(char *str1, char *str2);
int read_line(char str[], int n);

int main(void) {
    char str[] = "Welcome Gloria";
    printf("%s\n", str);
    printf("%.6s\n", str);

    int length = num_char(str);
    printf("Length is %d\n", length);

    char str1[50] = "Hello!";
    char str2[50] = " Gloria"; // Adding a space before "Gloria"
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    char str3[100];
    printf("Enter a string: ");
    length = read_line(str3, 100);
    printf("String is: %s\n", str3);
    printf("Length of the entered string: %d\n", length);

    return 0;
}

int num_char(char *s) {
    char *p;
    int count = 0;
    for (p = s; *p != '\0'; p++)
        count++;
    return count;
}

void concatenate(char *str1, char *str2) {
    strcat(str1, str2);
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (i < n - 1) {
            str[i++] = ch;
        }
    }
    str[i] = '\0'; // Null-terminate the string
    return i;
}

