#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* PrevNode;

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (PrevNode == NULL) {
        PrevNode = newNode;
    } else {
        PrevNode->next = newNode;
        PrevNode = newNode;
    }
    return newNode;
}

void traverse(struct Node* head){
    struct Node* temp=head;
    struct Node* a;
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

int main(){
    PrevNode =NULL;
    struct Node* head = createNode(1);
    createNode(10);
    createNode(101);
    createNode(120);
    createNode(104);
    createNode(102);
    traverse(head);
    return 0;
}