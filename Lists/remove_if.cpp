#include<iostream>
#include<list>

using namespace std;

//Predicate implemented as a function
bool even(const int &value)
{
    return (value%2)==0;
}

int main()
{
    list<int> myList = {1,2,2,2,3,4,5,6,6,7,8,8,9};
    myList.remove_if(even);

    for(auto it = myList.begin(); it!=myList.end(); ++it)
    {
        cout<<*it<<"   ";
    }
    return 0;

}
