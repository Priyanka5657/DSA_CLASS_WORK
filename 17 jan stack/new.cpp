// 17/01/2024 
// *stack
// stack follows lifo approach it is having  pop and push method the push method is use to add element and pop method is use to remove element 
// it is having underfollow and overfollow condition 


// insertion and deletion is start on top 

#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>st;
    st.push(10);
    st.push(12);
    st.push(1);
    st.push(15);
    st.pop();
    cout<<st.top()<<"\n";
    while(!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
}

// wap to find out the minimum value in stack ?


#include <iostream>
#include <stack>
#include <limits.h>

class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    // Push an element onto the stack
    void push(int value) {
        mainStack.push(value);

        // Update the min stack
        if (minStack.empty() || value <= minStack.top()) {
            minStack.push(value);
        }
    }

    // Pop an element from the stack
    void pop() {
        if (mainStack.empty()) {
            std::cout << "Stack is empty, cannot pop." << std::endl;
            return;
        }

        // If the popped element is the minimum, pop it from the min stack as well
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }

    // Get the top element of the stack
    int top() {
        if (mainStack.empty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }
        return mainStack.top();
    }

    // Get the minimum element in the stack
    int getMin() {
        if (minStack.empty()) {
            std::cout << "Stack is empty." << std::endl;
            return INT_MAX; // Return a large value if the stack is empty
        }
        return minStack.top();
    }

    // Check if the stack is empty
    bool isEmpty() {
        return mainStack.empty();
    }
};

int main() {
    MinStack s;

    s.push(10);
    s.push(20);
    s.push(5);
    s.push(30);

    std::cout << "Minimum value: " << s.getMin() << std::endl; // Output: 5

    s.pop();
    std::cout << "Minimum value after pop: " << s.getMin() << std::endl; // Output: 5

    s.pop();
    std::cout << "Minimum value after another pop: " << s.getMin() << std::endl; // Output: 10

    return 0;
}
