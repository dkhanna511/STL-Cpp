#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> lis = {1,2,3,4,5,6};

    auto it = lis.emplace(lis.begin(), 2);
    
    //inserts at the beginning of the list
    lis.emplace(it, 1);

    cout<<"List : "<<endl;
    for(auto it = lis.begin(); it!=lis.end(); it++)
    {
        cout<<*it<<"  ";
    }
    return 0;

}