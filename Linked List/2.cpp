//Reverse a Linked List in groups of given size


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



Node *Reverse(Node *head_node,int k){
    Node *prev = NULL;
    Node *nextone = NULL;
    Node *curr = head_node;
    int count=0;
    
    while(curr!=NULL && count<k){
          nextone = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nextone;
          count++;
           
    }

    if(nextone!=NULL){
       head_node->next = Reverse(nextone,k);
    }
    return prev;

}

int main() {
    int k;
    cin>>k;
    Node *head = NULL;

    append(&head,65);
    append(&head,5);
    push(&head,2);
    
    push(&head,3);
    insertAfter(&head,65,100);
     
 
    print(head);
    cout<<endl;
    cout<<"Reverse a Linked List in groups of given size : ";
    head = Reverse(head,k);
    print(head);
}
