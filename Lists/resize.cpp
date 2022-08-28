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

    //Initial List:
    for(auto itr = demoList.begin(); itr !=demoList.end(); ++itr)
    {
        cout<<*itr<<"  ";
    }

    int size_list = demoList.size();
    //Resize the list to contain less elements
    demoList.resize(size_list - 4);

    cout<<"\nList after first resize with lesser elements : "<<endl;
    for(auto itr = demoList.begin(); itr!=demoList.end(); itr++)
    {
        cout<<*itr<<"   ";
    }

    size_list = demoList.size();

    // Resizing the list containing more elements than before
    demoList.resize(size_list + 10);
    cout<<"\nList after second resize after more elements: "<<endl;
    for(int itr:demoList)
    {
        cout<<itr<<"   ";
    }


    //Resizing to larger size with added parameter
    size_list = demoList.size();
    demoList.resize(size_list + 5, 20);

    cout<<" \nList after resize with added parameter"<<endl;
    for(int itr : demoList)
    {
        cout<<itr<<"   ";
    }
    return 0;

}