
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int x;
    struct node *next;
};



int main()
{

  struct node *head ,*ptr;
  head = NULL;
  ptr = (struct node*)malloc (sizeof(struct node));
  printf("enter no");
  scanf("%d", &ptr->x);
  ptr->next =head;
  head=ptr;
   ptr = (struct node*)malloc (sizeof(struct node));
   printf("enter no");
    scanf("%d" ,&ptr->x);
    ptr->next=head;
    head=ptr;
     ptr = (struct node*)malloc (sizeof(struct node));
   printf("enter no");
    scanf("%d", &ptr->x);
    ptr->next=head;
    head=ptr;

    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d" , ptr->x);
        ptr =ptr->next;
    }


    return 0;
}
