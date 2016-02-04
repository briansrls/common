#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <array>
int pop(int a[], int &top){
    if(top==-1)printf("Your stack is empty!\n");
    else{
        top--;
        return a[top+1];
    }
}
void push(int a[], int &top, int value){
    if(top==sizeof(a)) printf("Your stack is full!!\n");
    else{
        a[top+1] = value;
        top++;
    }
}
void peek(int a[], int &top){
    if(top==-1) printf("Your stack is empty!\n");
    else printf(" %d\n", a[top]);
}
int main(){
    int A[10];
    int top = -1;
    push(A, top, 10);
    peek(A, top);
    pop(A, top);
    peek(A, top);
}
