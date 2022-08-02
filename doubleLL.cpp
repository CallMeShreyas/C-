#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
};

void printListForward(Node* node){
    while(true){
        if(node->next==NULL){
            cout << node->data << endl;
            break;
        }
        else{
            cout << node->data << endl;
            node = node->next;
        }
    }
}

void printListBackword(Node* node){
    while(true){
        if(node->prev==NULL){
            cout << node->data << endl;
            break;
        }
        else{
            cout << node->data << endl;
            node = node->prev;
        }
    }
}

void deleteNodeAtGivenPos(Node* node, int n){
    int temp = 1;
    while(true){
        if(temp==n){
            Node *p = node->prev;
            Node *n = node->next;
            p->next = n;
            n->prev = p;
            delete node;
            break;
        }
        else if(node->next==NULL && temp!=n){
            cout << "Node not Found";
        }
        else{
            node = node->next;
            temp++;
        }
    }
}

void deleteGivenNode(Node* node){
    Node *p = node->prev;
    Node *n = node->next;
    p->next = n;
    if(node->next != NULL){
        n->prev = p;
    }
    delete node;
}

int main(){
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    Node *last = new Node();

    node1->data = 1;
    node1->next = node2;
    node1->prev = NULL;

    node2->data = 2;
    node2->next = node3;
    node2->prev = node1;

    node3->data = 3;
    node3->next = last;
    node3->prev = node2;

    last->data = 4;
    last->next = NULL;
    last->prev = node3;

    deleteGivenNode(last);
    printListForward(node1);
    // printListBackword(last);
    // deleteNodeAtGivenPos(node1, 3);
}