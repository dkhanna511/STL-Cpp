#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1 = {1,2,3};
    list<int> l2 = {4,5};
    list<int> l3 = {6,7,8};
    
    cout<<"list l1 before splice operation : "<<endl;
    for(auto x : l1)
    {
        cout<<x<<"  ";
    }
    
    //Transfer all the elements of l2 to in the beginning
    l1.splice(l1.begin(), l2);

    cout<<"\nlist l1 after splice operation : "<<endl;
    for(auto x : l1)
    {
        cout<<x<<"  ";
    }
    
    //transfer all the elements of l1 to l3 at the end
    cout<<"\nlist l3 before splicing"<<endl;
    for(auto itr : l3)
    {
        cout<<itr<<"  ";
    }

    l3.splice(l3.end(), l1);
    cout<<"\n list l3 after splicing"<<endl;
    for(auto itr : l3)
    {
        cout<<itr<<"   ";
    }
    



}
