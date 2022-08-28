#include<iostream>
#include<list>

using namespace std;




int main()
{
    list<int> demo_list;

    demo_list.assign(10, 100);

    //Displaying the list
    for(int itr:demo_list)
    {
        cout<<itr<<"  ";
    }

    list<int> first_list, second_list;
    // first_list.assign(10, 500);
    second_list.assign(5, 20);
    cout<<"\nNow doing the replacement example"<<endl;
    cout<<"\nsecond list is :"<<endl;
    for(auto it = second_list.begin(); it!=second_list.end(); ++it)
    {
        cout<<*it<<"  ";
    }

    //Now assiging second list elements to the first list

    first_list.assign(second_list.begin(), second_list.end());
    cout<<" \nupdated first list:"<<endl;
    for(int itr:first_list)
    {
        cout<<itr<<"   ";
    }
    

    return 0;
}
