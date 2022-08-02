#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Stack{
private:
    int top;
    Node *topaddr;
    Node *head;
    Node* createNode(int n){
        Node *newnode = new Node();
        newnode->data = n;
        newnode->next = NULL;
        return newnode;
    }

public:

    bool push(int n){
        Node *node = createNode(n);
        if (head->data == INT_MIN){
            topaddr = node;
            head = node;
            top++;
            return true;
        }
        else{
            topaddr->next = node;
            top++;
            return true;
        }
    }

    bool pop(){
        Node *temp = head;
        if(head->data == INT_MIN){
            cout << "Stack UnderFlow";
            return false;
        }
        else if(head->next == NULL){
            delete head;
            top--;
            return true;
        }
        else{
            while(true){
                if(temp->next->next == NULL){
                    delete temp->next;
                    top--;
                    temp->next = NULL;
                    topaddr = temp;
                    return true;
                }
                else{
                    temp = temp->next;
                }
            }
        }
    }

    int peek(){
        if(head->data == INT_MIN){
            cout << "Stack UnderFlow";
            return -1;
        }
        else{
            return topaddr->data;
        }
    }
    
    bool isEmpty(){
        if(head->data == INT_MIN){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack *stack = new Stack();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);

    cout << stack->isEmpty() << endl;

}