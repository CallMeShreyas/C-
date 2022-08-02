#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void printList(Node* node, int n){
    while(n!=0){
        cout << node->data<<endl;
        node = node->next;
        n--;
    }
}

void printListSpecifiedTimes(Node* node, int n, int no){
    int temp = n;
    while(no!=0){
        while(temp!=0){
            cout << node->data<<endl;
            node = node->next;
            temp--;
        }
        temp = n;
        no--;
    }
}

void addNodeAfterGivenNode(Node* given_node, Node* node){
    Node *temp = given_node->next;
    given_node->next = node;
    node->next = temp;
}

void deleteNodeAfterGiven(Node* given_node){
    Node *temp = given_node->next;
    Node *temp2 = temp->next;
    given_node->next = temp2;
    delete temp;
}

void deleteGivenNode(Node* given_node){
    Node *temp = given_node;
    Node *temp2 = given_node->next;
    Node *n = temp;
    while(true){
        if(n->next == temp){
            temp = n;
            break;
        }
        else{
            n = n->next;
        }
    }
    temp->next = temp2;
    delete given_node;
}

bool ifListIsCircular(Node* any_node,int n){
    Node *temp = any_node->next;
    while(n!=0){
        while(true){
        if(temp->next == any_node){
            return true;
        }
        else{
            temp = temp->next;
            n--;
        }
        }
    }
    return false;
}

int countNodes(Node* node){
    Node *temp = node;
    int count = 0;
    while(true){
        if(temp->next == node){
            count++;
            break;
        }
        else{
            temp = temp->next;
            count++;
        }
    }
    return count;
}

int main(){
    Node *head = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    Node *last = new Node();
    Node *newnode = new Node();

    head->data = 1;
    head->next = node2;
    node2->data = 2;
    node2->next = node3;
    node3->data = 3;
    node3->next = last;
    last->data = 4;
    last->next = head;
    newnode->data = 5;
    newnode->next = NULL;
    // printListSpecifiedTimes(node2, 4, 3);
    // deleteGivenNode(newnode);
    // deleteNodeAfterGiven(head);

    addNodeAfterGivenNode(last, newnode);
    // cout << ifListIsCircular(last, 5);
    // printList(head, 5);
    cout << countNodes(node3);
}