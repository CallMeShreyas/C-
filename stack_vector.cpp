#include<bits/stdc++.h>
using namespace std;

class Stack{
private:

vector<int> stack;
int top;

public:

Stack(){
    top = -1;
}

int push(int n){
    stack.push_back(n);
    top++;
    return 1;
}

int pull(){
    int temp = stack.back();
    stack.pop_back();
    top--;
    return temp;
}

int return_top(){
    return stack.back();
}

void printStack(){
    for (int i = stack.size(); i >= 0; --i){
        cout << stack[i] << endl;
    }
}

};

int main(){
    Stack *s = new Stack();
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->pull();
    s->pull();
    
    s->printStack();
    // cout << s->return_top();
}