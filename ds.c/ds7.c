#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int item) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = item;
    new_node->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
    printf("Enqueued %d\n", item);
}

int dequeue() {
    if (front == NULL) {
        printf("Queue underflow");
        return -1;
    } else {
        struct Node* temp = front;
        int item = temp->data;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        free(temp);
        return item;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("Dequeued %d\n", dequeue());
    printf("Dequeued %d\n", dequeue());
    enqueue(4);
    printf("Dequeued %d\n", dequeue());
    printf("Dequeued %d\n", dequeue());
    return 0;
}
