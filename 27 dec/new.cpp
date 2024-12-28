// <>   ke bich ka space ko  temlate  kahte hai  template = it is genralised form 



// #include<iostream>
// using namespace std;
// void sum (float a,float b)
// {
// cout<<"result="<<a*b;
// }
// void sum (double a,double b)
// {
// cout<<"result="<<a+b;
// }


// int main()
// {
//     sum(20.9,30.7);
// }

#include<iostream>
using namespace std;
template<typename data1 ,typename data2>
data1 sum (data1 a, data2 b)
{
    return a+b;

}
int main()
{

// cout<<sum('!','@'); 33+64

cout<<sum(12,7.1);

}