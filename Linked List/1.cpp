//Reverse the Linked List (Iterative Method)


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void print(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

void append(Node **head_node , int data){
    Node *newnode = new Node();
    Node *last = *head_node;

    newnode->data = data;
    newnode->next = NULL;

    if(*head_node==NULL){
        *head_node = newnode;
    
    }
    else{
        while(last->next != NULL){
            last=last->next;
        }
        last->next = newnode;
        
    }

  
}

void push(Node **head_node,int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    
    newnode->next = *head_node;
    *head_node = newnode;
    

}

void insertAfter(Node **head_node,int previous_node_data,int data){
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    
    Node *last = *head_node ;
    while(last->data !=previous_node_data){
        last=last->next;
    }

    newnode->next = last->next;
    last->next = newnode;

}



void Reverse(Node **head_node){
    Node *prev = NULL;
    Node *nextone = NULL;
    Node *curr = *head_node;
    
    while(curr!=NULL){
          nextone = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nextone;
    }
    *head_node = prev;

}

int main() {
    Node *head = NULL;

    append(&head,65);
    append(&head,5);
    push(&head,2);
    
    push(&head,3);
    insertAfter(&head,65,100);
     
 
    print(head);
    cout<<endl;
    cout<<"Reverse Linked List : ";
    Reverse(&head);
    print(head);
}
