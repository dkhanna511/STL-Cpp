#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Initialized vector
    vector<int> v(10);
    for(int i = 0; i< 10 ; i++)
    {
        v[i] = i;
    }
    cout<<"Vector size initially : "<<v.size();

    cout<<"\nVector elements are : "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cout<<v[i]<<"  ";
    }
    //Changes the size of the vector
    //but does not destroys the elements
    v.resize(5);

    cout<<"\n Vector size after resize(5) :"<<v.size();

    cout<<"\nVector elements after resize(5) are : "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cout<<v[i]<<"   ";
    }

    v.shrink_to_fit();

    cout<<"\n Vector size after shrink_to_fit() : "<<v.size();

    cout<<"\n Vector elements after shrink_to_fit() : "<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<v[i]<<"  ";
    }
    return 0;
}