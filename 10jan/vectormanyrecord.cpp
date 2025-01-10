// // enter many record in vector

// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     vector<pair<int,string>>v;
//     int record,rollno;
//     string name;
//     cout<<"enter how many records\n";
//     cin>>record;
//     for(int i=1; i<=record; i++)
//     {
//         cout<<"\nenter number\n";
//         cin>>rollno;
//         cout<<"\nenter name\n";
//         cin>>name;
//         v.push_back({rollno,name});



//     }
//     cout<<"nstored data are\n";
//     for(int i=0; i<record; i++)
//     {
//         cout<<v[i].first<<","<<v[i].second<<"\n";
//     }
    
// }



// vector and tuple 

// #include<iostream>
// using namespace std;
// #include<vector>
// #include<tuple>
// int main()
// {
//    tuple<int, string, int, int> tp{101, "subh", 21, 44456};

//     // Access and print the tuple elements
//     cout << "rollno=" << get<0>(tp) << "\n";
//     cout << "name=" << get<1>(tp) << "\n";
//     cout << "age=" << get<2>(tp) << "\n";
//     cout << "mobileno=" << get<3>(tp) << "\n";

    
// }


#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
int main()
{
   tuple<int, string, int, int> tp;

    

    
}