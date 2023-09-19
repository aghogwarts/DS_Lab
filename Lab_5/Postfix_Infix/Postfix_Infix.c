#include <stdio.h>
#include <string.h>
#define M 100

typedef struct {
    char arr[50][50];
    int top;
} stk;

stk s;
char infix[50], pfix[50];

void push(char sym[]) {
    if(s.top == M - 1) {
        printf("\n -- Stack Overflow !!");
        return;
    }
    ++s.top;
    strcpy(s.arr[s.top],sym);
}

char* pop() {
    if(s.top == -1) {
        printf("\n -- Stack Underflow !!");
    } else
        return (s.arr[s.top--]);
}

void post_in() {
    char op1[10],op2[10],sym[2],res[10];
    printf("\n >> Enter the postfix expression:\n __ ");
    scanf("%s", pfix);

    for(int i = 0; pfix[i] != '\0'; i++) {
        sym[0] = pfix[i];
        sym[1] = '\0';
        if(sym[0] == '+' || sym[0] == '-' || sym[0] == '*' || sym[0] == '/') {
            strcpy(op2, pop());
            strcpy(op1, pop());
            strcpy(res, "(");
            strcat(res, op1);
            strcat(res, sym);
            strcat(res, op2);
            strcat(res, ")");
            push(res);
        } else {
            push(sym);
        }
    }
    printf("\n -- Parenthesized infix expression is:\n __ ");
    // printf("\n -- Parenthesized infix expression is:\n __ %d\n", pop());
    puts(pop());
}

void main() {
    s.top = -1;
    post_in();
}
