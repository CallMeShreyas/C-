#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int arr[5];
    int front = -1;
    int rear = -1;
public:
    bool enqueue(int n);
    bool dequeue();
    bool isFull();
    bool isEmpty();
    void printQueue();

};

bool Queue::enqueue(int n){
    if(front==-1){
        front = 0;
        rear = 0;
        arr[rear] = n;
        return true;
    }
    else if(front==0 && rear==4){
        cout << "Over Flow" << endl;
        return false;
    }
    else if(front!=0 && rear==4){
        rear = 0;
        arr[rear] = n;
        return true;
    }
    else{
        rear++;
        arr[rear] = n;
        return true;
    }
}

bool Queue::dequeue(){
    if(front==-1){
        cout << "under Flow" << endl;
        return false;
    }
    else if(front == rear){
        arr[rear] = 0;
        front = rear = -1;
        return true;
    }
    else if(front==4){
        arr[front] = 0;
        front = 0;
        return true;
    }
    else{
        arr[front] = 0;
        front++;
        return true;
    }
}

void Queue::printQueue(){
    for (int i = 0; i < 5; ++i){
        cout << arr[i] << endl << endl;
    }
}

bool Queue::isFull(){
    if(front==0 && rear==4){
        return true;
    }
    else{
        return false;
    }
}

bool Queue::isEmpty(){
    if(front==-1 && rear==-1){
        return true;
    }
    else{
        return false;
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
    // queue->enqueue(1);

    // queue->printQueue();

    cout<<queue->isEmpty();
}