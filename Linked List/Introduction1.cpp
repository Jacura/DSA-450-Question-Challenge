//BASIC GYAN


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
int main() {
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    print(head);
}
