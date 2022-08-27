#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> demoList;

    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
    demoList.push_back(50);
    demoList.push_back(60);
    demoList.push_back(70);
    demoList.push_back(80);
    
    cout<<"The list is : ";
    for(auto it = demoList.begin(); it!=demoList.end(); it++)
    {
        cout<<*it<<"  ";
    }
    cout<<endl;

    //Creating an iterator to point to the first element in the list
    list<int>::iterator itr = demoList.begin();

    demoList.erase(itr);

    cout<<"List after deletio is : ";
    for(auto it = demoList.begin(); it!=demoList.end(); ++it)
    {
        cout<<*it<<"  ";
    }
    cout<<endl;

    cout<<"Now deleting multiple elements"<<endl;

    list<int>::iterator itr1 = demoList.begin(), itr2 = demoList.begin();

    //Shifting the pointer itr2 by 3 positions;
    advance(itr2, 3);

    demoList.erase(itr1, itr2);

    //Printing elements after deleting;
    for(auto it = demoList.begin(); it!=demoList.end(); ++it)
    {
        cout<<*it<<"  ";
    }
    return 0;
    
}