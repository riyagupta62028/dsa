#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *start) {
    struct node *cur = start;
    while (cur != NULL) {
        printf("node data %d\n", cur->data);
        cur = cur->next;
    }
}

void insert(struct node **start, int data) {
    struct node *cur = (struct node*)malloc(sizeof(struct node));
    cur->data = data;
    cur->next = *start;
    *start = cur;
}

int main() {
    struct node *start, *cur1, *cur2;
    start = (struct node*)malloc(sizeof(struct node));
    cur1 = (struct node*)malloc(sizeof(struct node));
    cur2 = (struct node*)malloc(sizeof(struct node));
    start->data = 45;
    start->next = cur1;
    cur1->data = 54;
    cur1->next = cur2;
    cur2->data = 90;
    cur2->next = NULL;
    int data;
    printf("enter item: ");
    scanf("%d", &data);
    insert(&start, data);
    traverse(start);

    return 0;
}
