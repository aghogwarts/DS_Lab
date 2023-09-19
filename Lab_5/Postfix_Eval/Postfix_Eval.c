#include <stdio.h>
#define SIZE 100

char stack[SIZE];
char postfix[SIZE];
int top = -1;


void push(int n) {
    top++;
    if(top >= SIZE ) {
        printf("-n -- Stack out of bound !!");
        return;
    }
    stack[top] = n;
}

int pop() {
    if(top < 0) {
        printf("\n -- Stack empty !!");
        return -9999999;
    }
    return (stack[top--]);
}

int charToInd(char c) {
    switch(c) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default : return 0;
    }
}

int isOperand(char c) {
    switch(c) {
        case '(':
        case ')':
        case '+':
        case '-':
        case '*':
        case '/':
        case '%': return 1;
        default : return 0;
    }
}

int main() {
    printf("\n >> Enter the postfix expression:\n __ ");
    scanf("%s", postfix);

    int i = 0;

    while(postfix[i] != '\0') {
        if(isOperand(postfix[i]) == 0) {
            push(charToInd(postfix[i]));
        } else {
            int res = 0;
            int b = pop();
            int a = pop();

            switch(postfix[i]) {
                case '+':
                    res = a + b;
                    break;
                case '-':
                    res = a - b;
                    break;
                case '*':
                    res = a * b;
                    break;
                case '/':
                    res = a / b;
                    break;
                case '%':
                    res = a % b;
                    break;
                default :
                    res = 0;
            }
            push(res);
        }
        i++;
    }

    printf("\n -- Evaluated expression is:\n __ %d\n", pop());

    return 0;
}
