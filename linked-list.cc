#include <iostream>
#include <stdlib.h>
#include <stdio.h>
struct Node{
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head!=NULL)temp->next=head;
    head = temp;
    return head;
}
void printList(Node* head)
{
    printf("List is: ");
    while(head!=NULL){
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
    
}
int main() {
    
    Node* head = NULL;
    //insertAtEnd(A, 10);
    printList(head);
    head = insertAtBeginning(head, 10);
    printList(head);
    head = insertAtBeginning(head, 100);
    printList(head);
}