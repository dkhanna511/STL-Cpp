#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> list1;

    //using assign to insert multiple numbers
    //Creates 3 occurences of 2
    list1.assign(3,2);

    // Initializing List iterator to beginning.
    list<int>::iterator it = list1.begin();

    cout<<"Actual list is : "<<endl;
    for(auto it = list1.begin(); it!=list1.end(); ++it)
    {
        cout<<*it<<"  ";
    }
    cout<<endl;
    //Iterator to point to 3rd position.
    advance(it, 2);

    //using insert to insert 1 element at the third position.
    //Insert 5 at 3rd position.
    list1.insert(it, 5);

    //printing the new list.
    cout<<"The list after insertion is : "<<endl;

    for(auto it  = list1.begin(); it!= list1.end(); ++it)
    {
        cout<<*it<<"   "<<endl;
    }
    cout<<endl;

    //using insert to insert 2 elements at the 4th position
    //inserts 2 occurences of starting from 4th position
    list1.insert(it, 2, 7);

    //Here we have used insert(2, 7) because iterator "it" was already on 2nd position, and we have shifted more by 2 positions. 

    cout<<"The list after inserting multiple elements using insert() is : "<<endl;

    for(list<int>::iterator i = list1.begin(); i!=list1.end(); i++)
    {
        cout<<*i<<"  ";
    }
    cout<<endl;
}