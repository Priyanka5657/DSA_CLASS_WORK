// queue folows fifo 


#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int sz=q.size();
    cout<<"size="<<sz<<"\n";
    cout<<q.front();
    while(sz--)
    {
        cout<<q.front()<<"\t";
        q.pop();
    }
    

}
