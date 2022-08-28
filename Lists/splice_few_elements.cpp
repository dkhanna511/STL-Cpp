#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1 = {1,2,3};
    list<int> l2 = {4,5, 6, 7, 8};
    list<int>::iterator it;

    it = l2.begin();

    cout<<"list l1 before splicing "<<endl;
    for(auto x : l1)
    {
        cout<<x<<"   ";
    }
    
    //Transfer "4" at the end of list 1
    l1.splice(l1.end(), l2, it);

    cout<<"\n List l1 after splicing"<<endl;
    for(auto x : l1)
    {
        cout<<x<<"  ";
    }

    cout<<"\nNow splicing with a range of elements : "<<endl;
    advance(it, 2);
    cout<<"hello";
    l1.splice(l1.begin(), l2, it, l2.end());
    cout<<"world";
    for(auto x:l1)
    {
        cout<<x<<"  ";
    }
    // cout<<"\n";

    return 0;
}