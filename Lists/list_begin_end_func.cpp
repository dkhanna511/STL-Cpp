#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList{1,2,3,4,5};

    for(auto it = myList.begin(); it !=myList.end(); it++)
    {
        cout << "  "<<*it;
    }
    return 0;
    
}