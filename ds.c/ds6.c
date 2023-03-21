#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0, rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow");
    } else {
        rear++;
        queue[rear] = item;
        printf("Enqueued %d\n", item);
    }
}

int dequeue() {
    if (front > rear) {
        printf("Queue underflow");
        return -1;
    } else {
        int item = queue[front];
        front++;
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

