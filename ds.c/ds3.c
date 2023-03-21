#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow");
    } else {
        top++;
        stack[top] = item;
        printf("Pushed %d\n", item);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow");
        return -1;
    } else {
        int item = stack[top];
        top--;
        return item;
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("Popped %d\n", pop());
    printf("Popped %d\n", pop());
    push(4);
    printf("Popped %d\n", pop());
    printf("Popped %d\n", pop());
    return 0;
}
