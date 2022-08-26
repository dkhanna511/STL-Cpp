#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void showList(list<int> g)
{
    list<int>::iterator it;
    for(it = g.begin; it != g.end(); ++it)
    {
        cout<<"\t "<<*t;
    }
    cout<<endl;
}

int main()
{
    ilst<int> gqlist1, gqlist2;

    for(int i = 0; i < 10; i++)
    {
        gqlist1.push_back(i*2);
        gqlist2.push_back(i * 3);
    }

    //printing the lists
    cout<<"List 1 (gqlist1) is : "<<showList(gqlist1)<<endl;
    cout<<"List 2 (gqlist2) is : "<<showList(gqlist2)<<endl;

    //printing first and last elements of the list
    cout<<"gqlist1.front() : "<<gqlist.front()<<endl;
    cout<<"gqlist2.back() : "<<gqlist2.back()<<endl;

    //deleting front and last element from the list
    cout<<"gqlist1.pop_front() : "<<gqlist1.pop_front()<<showList(gqlist1)<<endl;
    cout<<"gqlist2.pop_back() : "<<gqlist2.pop_back()<<showList(gqlist2)<<endl;

    //Reversing the lists
    gqlist1.reverse();
    gqlist2.reverse();

    cout<<"Reversed gqlist1 : "<<showList(gqlist1)<<endl;
    cout<<"Reversed gqlist2 : "<<showList(gqlist2)<<endl;

    //Sorting the lists
    gqlist1.sort();
    gqlist2.sort();

    cout<<"Sorted gqlist1 : "<<showList(gqlist1)<<endl;
    cout<<"Sorted gqlist2 : "<<showList(gqlist2)<<endl;

    return 0;
}


