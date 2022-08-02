#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);                                      // push() function pushes element into stack
    s.push(4);
    s.push(5);

    while (!s.empty())                               // empty() function return stack is empty or not
    {
        cout << s.top() << endl;
    
    
    // top() return top element of a stack

        s.pop();                                    // pop() removes topmost element of a stack
    }
}