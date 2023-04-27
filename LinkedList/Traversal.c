#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void Traversal_LinkedList(struct Node* ptr);
int main() {
    struct Node *head;
    struct Node *first;
    struct Node *second;

    // Allocating memory for nodes in linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node*));
    first=(struct Node*)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));

    // giving value to first node
    head->data=10;
    // linking/pointing first node to second node
    head->next=first;

    // giving value to second node
    first->data=20;
    // linking/pointing second node to third node
    first->next=second;

    // giving value to third node
    second->data=30;
    // linking/pointing third node to NULL which signifies that our linked list has ended
    second->next=NULL;

    Traversal_LinkedList(head);
    return 0;
}
void Traversal_LinkedList(struct Node* ptr) {
    printf("Displaying Elemnts of our Linked List: \n");
    while(ptr!=NULL) {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

