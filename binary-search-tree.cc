#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;

struct BstNode{
int data;
BstNode* left;
BstNode* right;
};

BstNode* GetNewBstNode(int data){
    BstNode* temp = new BstNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


BstNode* insertIntoTree(BstNode* root, int value){
    if(root == NULL){
        root=GetNewBstNode(value);}
    else if(root->data >= value){root->left = insertIntoTree(root->left, value);}
    else{root->right = insertIntoTree(root->right,value);}
    return root;
}

bool Search(BstNode* root, int value){
    if(root==NULL){ return false;}
    else if(root->data == value){ return true;}
    else if(root->data >= value){
        return Search(root->left, value);}
    else{
        return Search(root->right, value);}
}

void depthFirst(BstNode* root){
    if(root!=NULL){
        
        depthFirst(root->left);
        
        depthFirst(root->right);
        printf("%d, ", root->data);
        
    }
}

void breadthFirst(BstNode* node){
    if(node==NULL) return;
    queue<BstNode*> Q;
    Q.push(node);
    while(!Q.empty()){
        BstNode* current = Q.front();
        printf("%d, ", current->data);
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop();
    }
}

void invertTree(BstNode* node){
    if(node==NULL)return;
    BstNode* temp = NULL;
    temp = node->right;
    node->right = node->left;
    node->left = temp;
    invertTree(node->right);
    invertTree(node->left);
}

int main(){
    BstNode* root = NULL;
    root=insertIntoTree(root,15);
    root=insertIntoTree(root,10);
    root=insertIntoTree(root,20);
    root=insertIntoTree(root,25);
    root=insertIntoTree(root,7);
    //if(Search(root, 15)==true) printf("found!\n");
    //else printf("not found!\n");
    //if(Search(root, 22)==true) printf("found!\n");
    //else printf("not found!\n");
    breadthFirst(root);
    invertTree(root);
    breadthFirst(root);
}