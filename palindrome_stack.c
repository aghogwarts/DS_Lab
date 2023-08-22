#include <stdio.h>
#define MAX 100

int top = -1;
char stack[MAX];

void AddStringToStack(char s[100]) {
    top = 0;

    while(s[top] != '\0' && top < MAX - 1) {
        stack[top] = s[top];
        top++;
    }

    stack[top] = '\0';
}

int main() {
    char s[100];
    int flag = 1;
    printf(">> Enter string to check:\n__ ");
    scanf("%s", s);

    AddStringToStack(s);

    int i = 0;
    top--;

    while(top >= 0) {
        printf("\n++ %c %c", stack[top], s[i]);
        if(stack[top] != s[i]) {
            printf("\n\n-- Entered String is Not a Palindrome !!\n");
            flag = 0;
            break;
        }
        i++;
        top--;
    }

    if(flag == 1) {
        printf("\n\n-- Entered String is a Palindrome !!\n");
    }

    return 0;
}
