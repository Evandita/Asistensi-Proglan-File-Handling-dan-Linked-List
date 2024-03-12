#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insertFront(struct node **head, struct node **tail, int data){

    struct node* temp = (struct node*)malloc(sizeof(struct node));

    if (*head == NULL){
        temp->data = data;
        temp->next = NULL;
        *head = temp;
        *tail = temp;
    }
    else {
        temp->data = data;
        temp->next = *head;
        *head = temp;
    }

    return;

}

void insertBack(struct node **head, struct node **tail, int data){

    struct node* temp = (struct node*)malloc(sizeof(struct node));

    if (*head == NULL){
        temp->data = data;
        temp->next = NULL;
        *head = temp;
        *tail = temp;
    }
    else {
        temp->data = data;
        temp->next = NULL;
        (*tail)->next = temp;
        *tail = (*tail)->next;
    }

    return;

}

void removeFront(struct node **head, struct node **tail){
    
    if (*head == NULL){
        return;
    }
    else {
        struct node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    return;

}

void removeBack(struct node **head, struct node **tail){

    if (*head == NULL){
        return;
    }
    else {
        struct node *temp = *tail;
        struct node *itr = *head;

        while (itr->next != *tail){
            itr = itr->next;
        }

        itr->next = NULL;
        *tail = itr;
        free(temp);
    }

    return;

}

void printList(struct node *head){
    struct node *itr = head;
    while (itr != NULL) {
        printf("%d ", itr->data);
        itr = itr->next;
    }
    printf("\n");
    return;
}

void search(){
    //Find out how to use search algorithm in linked list
}

void sort(){
    //Find out how to sort a linked list
}

void reverse(){
    //Find out how to reverse a linked list
}

int main() {
    struct node *head = NULL;
    struct node *tail = NULL;

    insertFront(&head, &tail, 1);
    insertFront(&head, &tail, 2);
    insertFront(&head, &tail, 3);
    insertFront(&head, &tail, 4);
    insertFront(&head, &tail, 5);

    printList(head);

    insertBack(&head, &tail, 6);
    insertBack(&head, &tail, 7);
    insertBack(&head, &tail, 8);
    insertBack(&head, &tail, 9);
    insertBack(&head, &tail, 10);

    printList(head);

    removeFront(&head, &tail);
    removeFront(&head, &tail);
    removeFront(&head, &tail);

    printList(head);

    removeBack(&head, &tail);
    removeBack(&head, &tail);
    removeBack(&head, &tail);
    
    printList(head);

    return 0;
}