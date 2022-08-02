#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int arr[5];
    int top = -1;

public:
    bool push(int n);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
};

bool Stack::push(int n){
    if(top==4){
        cout << "Stack OverFlow";
        return false;
    }
    else{
        top++;
        arr[top] = n;
        return true;
    }
}

int Stack::pop(){
    if (top == -1){
        cout << "Stack UnderFlow";
        return -1;
    }
    else{
        int temp = arr[top];
        arr[top] = 0;
        top--;
        return temp;
    }
}
int Stack::peek(){
    if(top==-1){
        cout << "Stack UnderFlow";
        return -1;
    }
    else{
        return arr[top];
    }
}

bool Stack::isFull(){
    if(top==(sizeof(arr)/4)-1){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Stack *stack = new Stack();
    stack->push(5);
    stack->push(4);
    stack->push(3);
    stack->push(2);
    stack->push(1);

    // while(!stack->isEmpty()){
    //     cout << stack->peek() << endl;
    //     stack->pop();
    // }
    cout << stack->isFull();
}