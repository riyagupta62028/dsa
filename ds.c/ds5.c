#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int item) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = item;
    new_node->next = top;
    top = new_node;
    printf("Pushed %d\n", item);
}

int pop() {
    if (top == NULL) {
        printf("Stack underflow");
        return -1;
    } else {
        struct Node* temp = top;
        int item = temp->data;
        top = top->next;
        free(temp);
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
