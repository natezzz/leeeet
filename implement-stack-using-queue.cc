#include <queue>

class Stack {
private:
    queue<int> q;
    
public:
    // Push element x onto stack.
    void push(int x) {
        q.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        queue<int> newQ;
        while (q.size() != 1) {
            newQ.push(q.front());
            q.pop();
        }
        q.pop();
        q = newQ;
    }

    // Get the top element.
    int top() {
        for (int i = 0; i < q.size()-1; i++) {
            q.push(q.front());
            q.pop();
        }
        
        int topElem =  q.front();
        q.push(q.front());
        q.pop();
        
        return topElem;
    }

    // Return whether the stack is empty.
    bool empty() {
        return q.empty();
    }
};
