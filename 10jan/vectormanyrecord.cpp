#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<pair<int,string>>v;
    int record,rollno;
    string name;
    cout<<"enter how many records\n";
    cin>>record;
    for(int i=1; i<=record; i++)
    {
        cout<<"\nenter number\n";
        cin>>rollno;
        cout<<"\nenter name\n";
        cin>>name;
        v.push_back({rollno,name});



    }
    cout<<"nstored data are\n";
    for(int i=0; i<record; i++)
    {
        cout<<v[i].first<<","<<v[i].second<<"\n";
    }
    
}