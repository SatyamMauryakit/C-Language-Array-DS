#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedtravirsal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemint List is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
 
 struct Node* insertAtend(struct Node* head, int data){
    struct Node * ptr=  (struct Node *)malloc(sizeof(struct Node));
    struct Node * p= head;
    while (/* condition */)
    {
        /* code */
    }
    
    ptr -> next=data;
    p=p->next;
    {
        /* data */
    };
    
    
 }



int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // Allocate memory for node in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // Linked First and second nodes
    head->data = 37;
    head->next = second;
    second->data = 28;
    second->next = third;
    third->data = 17;
    third->next = forth;
    forth->data = 57;
    forth->next = NULL;



int j,k;
printf("Enter The Data to insert :");
scanf("%d",&j);
printf("Enter The index to insert Data :");
scanf("%d",&k);
    // Call The all functions
    linkedtravirsal(head);
    printf("\nThe new list is : \n");
    head=insertatbetween(head,j,k); // 48 replace to any number to insert the begnning 
    printf("\n");
    linkedtravirsal(head);
    return 0;
}
