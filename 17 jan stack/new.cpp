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