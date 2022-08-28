#include<iostream>
#include<list>
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

    cout<<"List before removing elements : "<<endl;
    for(auto itr= demoList.begin(); itr!=demoList.end(); ++itr)
    {
        cout<<*itr<<"   ";
    }
    cout<<endl;

    //Now removing elements with value 20 and 40
    demoList.remove(20);
    demoList.remove(40);

    cout<<"List after deleting elements"<<endl;
    for(auto itr = demoList.begin(); itr!=demoList.end(); ++itr)
    {
        cout<<*itr<<"   ";
    }

    
    return 0;

}