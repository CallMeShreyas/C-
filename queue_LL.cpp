#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Queue{
private:
    Node *front;
    Node *rear;
    Node *createNode(int n){
        Node *node = new Node();
        node->data = n;
        node->next = NULL;
        return node;
    }
public:
    bool enqueue(int n);
    bool dequeue();
    bool isEmpty();
    void printQueue();
};



bool Queue::enqueue(int n){
    Node *node = createNode(n);
    if (front == NULL){
        front = node;
        rear = node;
        return true;
    }
    else{
        rear->next = node;
        rear = node;
        return true;
    }
}

bool Queue::dequeue(){
    if(front==NULL){
        cout << "UnderFlow" << endl;
        return false;
    }
    else{
        Node *temp = front->next;
        delete front;
        front = temp;
        return true;
    }
}

bool Queue::isEmpty(){
    if (front == NULL){
        return true;
    }
    else{
        return false;
    }
}

void Queue::printQueue(){
    if(isEmpty()){
        cout << "Empty Queue" << endl;
    }
    else{
        Node *temp = front;
        while(true){
            if(temp->next==NULL){
                cout << temp->data << endl;
                break;
            }
            else{
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }
}

int main(){

    Queue *queue = new Queue();

    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);
    queue->enqueue(4);
    queue->enqueue(5);

    queue->dequeue();
    queue->dequeue();
    queue->dequeue();
    queue->dequeue();
    queue->dequeue();

    // cout << queue->isEmpty() << endl;
    queue->printQueue();
}
