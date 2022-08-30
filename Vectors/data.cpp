#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>  vec{10, 20, 30, 40, 50};

    //memory pointer pointing to the first element
    int* pos = vec.data();

    //Prints the vector
    for(int i= 0; i< vec.size(); i++)
    {
        cout<<*pos++<<"  ";
    }
    return 0;
}