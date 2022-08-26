#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void showList(list<int> g)
{
    list<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it)
    {
        cout<<"\t "<<*it;
    }
    cout<<endl;
}

int main()
{
    list<int> gqlist1, gqlist2;

    for(int i = 0; i < 10; i++)
    {
        gqlist1.push_back(i*2);
        gqlist2.push_back(i * 3);
    }

    //printing the lists
    cout<<"List 1 (gqlist1) is : ";
    showList(gqlist1);
    cout<<"List 2 (gqlist2) is : ";
    showList(gqlist2);

    //printing first and last elements of the list
    cout<<"gqlist1.front() : "<<gqlist1.front()<<endl;
    cout<<"gqlist2.back() : "<<gqlist2.back()<<endl;

    //deleting front and last element from the list
    gqlist1.pop_front();
    cout<<"gqlist1.pop_front() : ";
    showList(gqlist1);


    gqlist2.pop_back();
    cout<<"gqlist2.pop_back() : ";    
    showList(gqlist2);

    //Reversing the lists
    gqlist1.reverse();
    gqlist2.reverse();

    cout<<"Reversed gqlist1 : ";
    showList(gqlist1);
    cout<<"Reversed gqlist2 : ";
    showList(gqlist2);

    //Sorting the lists
    gqlist1.sort();
    gqlist2.sort();

    cout<<"Sorted gqlist1 : ";
    showList(gqlist1);
    cout<<"Sorted gqlist2 : ";
    showList(gqlist2);

    return 0;
}


