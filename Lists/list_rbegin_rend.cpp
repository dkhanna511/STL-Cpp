#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lis = {10, 20, 30, 40, 50};
    // cout << "The first element is: " << *lis.begin();
    cout<<"the list in the reverse order using iterator is as follows"<<endl;

    for(auto it = lis.rbegin(); it!=lis.rend(); ++it)
    {
        cout<<*it<<"  ";
    }
    return 0;
}