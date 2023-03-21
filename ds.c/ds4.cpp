
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow");
    } else {
        top++;
        stack[top] = item;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack underflow");
        return '\0';
    } else {
        char item = stack[top];
        top--;
        return item;
    }
}

int is_balanced(char* expression) {
    int i;
    for (i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            push('(');
        } else if (expression[i] == ')') {
            if (pop() != '(') {
                return 0;
            }
        }
    }
    return top == -1;
}

int main() {
    char expression[100];
    printf("Enter an expression: ");
    scanf("%s", expression);
    if (is_balanced(expression)) {
        printf("Expression is balanced");
    } else {
        printf("Expression is not balanced");
    }
    return 0;
}
