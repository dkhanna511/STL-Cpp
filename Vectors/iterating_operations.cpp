#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> g1;
    for(int i = 1; i <=10; i++)
    {
        g1.push_back(i);
    }
    cout<<"The constructed vector using begin() and end() :"<<endl;
    for(auto i = g1.begin(); i !=g1.end(); i++)
    {
        cout<<*i<<"   ";
        // *i = *i + 1;
    }

    cout<<"\nThe output vector using rbegin() and rend() is :"<<endl;
    for(auto i = g1.rbegin(); i!=g1.rend(); i++)
    {
        cout<<*i<<"   ";
    }

    cout<<"\nOutput with cbegin() and cend() is : "<<endl;
    for(auto i = g1.cbegin(); i!=g1.cend(); i++)
    {
        cout<<*i<<"   ";
    }

    cout<<"\noutput with crbegin() and crend() is : "<<endl;
    for(auto i = g1.crbegin(); i!=g1.crend(); i++)
    {
        cout<<*i<<"   ";
    }
    return 0;
}