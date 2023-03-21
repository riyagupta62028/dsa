#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int aux_stack[MAX_SIZE];
int aux_top = -1;

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

void remove_duplicates() {
    while (top != -1) {
        int item = pop();
        int found = 0;
        for (int i = 0; i <= aux_top; i++) {
            if (aux_stack[i] == item) {
                found = 1;
                break;
            }
        }
        if (!found) {
            aux_top++;
            aux_stack[aux_top] = item;
        }
    }
    while (aux_top != -1) {
        int item = aux_stack[aux_top];
        aux_top--;
        push(item);
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(2);
    push(4);
    push(1);
    remove_duplicates();
    while (top != -1) {
        printf("Popped %d\n", pop());
    }
    return 0;
}
