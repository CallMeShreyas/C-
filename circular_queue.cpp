#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
private:
    int arr[5];
    int front;
    int rear;
public:
    CircularQueue(){
        front = rear = -1;
    }

    bool enqueue(int n);
    bool dequeue();
    bool isFull();
    bool isEmpty();
    void printCircularQueue();
};

bool CircularQueue::enqueue(int n){
    if(front==-1){
        front = (front + 1) % 5;
        rear = (rear + 1) % 5;
        arr[rear] = n;
        return true;
    }
    else if((rear+1)%5 == front){
        cout << "Over Flow" << endl;
        return false;
    }
    else{
        rear = (rear + 1) % 5;
        arr[rear] = n;
        return true;
    }
}

bool CircularQueue::dequeue(){
    if(front == rear){
        arr[front] = 0;
        front = rear = -1;
    }
    else{
        arr[front] = 0;
        front = (front + 1) % 5;
    }
    return true;
}

bool CircularQueue::isFull(){
    if((rear+1)%5 == front){
        return true;
    }
    else{
        return false;
    }
}

bool CircularQueue::isEmpty(){
    if(front==-1){
        return true;
    }
    else{
        return false;
    }
}

void CircularQueue::printCircularQueue(){
    cout << endl;
    for (int i = 0; i < 5; ++i){
        cout << arr[i] << "  ";
    }
}

int main(){
    CircularQueue *cq = new CircularQueue();
    cq->enqueue(1);
    cq->enqueue(2);
    cq->enqueue(3);
    cq->enqueue(4);
    cq->enqueue(5);

    cq->dequeue();
    cq->dequeue();

    cq->enqueue(4);
    cq->dequeue();

    cq->enqueue(10);
    cq->enqueue(20);

    cq->dequeue();
    cq->dequeue();
    cq->dequeue();
    cq->dequeue();
    cq->dequeue();
    cq->enqueue(10);
    cq->enqueue(10);
    cq->enqueue(30);

    cq->printCircularQueue();
}