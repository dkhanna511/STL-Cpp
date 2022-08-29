#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v = {1, 2, 3, 4, 5, 6, 7};
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The maximum capacity is : "<<v.capacity()<<endl;
    return 0;
}