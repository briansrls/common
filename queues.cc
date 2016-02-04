#include <stdlib.h>
#include <stdio.h>
#include <array>

int isEmpty(int front, int rear){
    if(front == -1 && rear == -1) return 1;
    else return 0;
}
int isFull(int a[], int front, int rear){
    if(rear == (sizeof(a)-1)) return 1;
    else return 0;
}

int dequeue(int a[], int &front, int &rear){
    if(isEmpty(front, rear)) printf("Your queue is empty! :(");
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{ front++; return a[rear+1]; };
}
void enqueue(int a[], int &front, int &rear, int value){
    if(isFull(a, front, rear)) return;
    else if(isEmpty(front, rear)){
        rear = 0;
        front = 0;
    }
    else rear++;
    a[rear]=value;
    
}

void frontqueue(int a[], int front){
    if(front!=-1) printf(" %d", a[front]);
    else printf("your stack is empty!");
}
int main(){
    int a[10];
    int rear, front;
    rear = -1;
    front = -1;
    enqueue(a, front, rear, 10);
    frontqueue(a, front);
}