/* Write a program to perform following string operations without using string handling
functions:
a.) length of the string
b.) string concatenation
c.) string comparison
d.) to insert a sub string
e.) to delete a substring */

#include <stdio.h>



int main() {
    int choice = 0, i, len;
    char str_1[100], str_2[100];
    do {
        printf("\n>> Enter choice of String operations to perform:\n1. Length of the string\n2.String Concatenation\n3. String Comparison\n4. Insert a sub string\n5. Delete a substring\n6. Exit\n\n__");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            fflush(stdin);
            printf("\n>> Enter a string: ");
            gets(str_1);
            for(len = 0; str_1[len] != '\0'; len++);
            printf("\n-- The length of the string entered is: %d", len);
        }
    } while (choice == 6);
}
