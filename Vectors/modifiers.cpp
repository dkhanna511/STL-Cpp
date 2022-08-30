#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    //Fill the array with 5 elements having value as 10.
    v.assign(5, 10);

    cout<<"The vector elements are : "<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }

    v.push_back(15);
    int n = v.size();
    cout<<"\nThe last element after v.push_back() is : "<<v[n-1]<<endl;
    
    v.pop_back();

    cout<<"The vector elements after popping out is : "<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }

    v.insert(v.begin(), 5);

    cout<<"\nThe inserted first element is :"<<v.front()<<endl;

    v.emplace_back(20);
    cout<<"The last element inserted via emplace() is "<<v.back()<<endl;

    v.clear();
    cout<<"The vector size after v.clear() is : "<<v.size()<<endl;

    cout<<"Performing swap operation now"<<endl;

    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";    

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

        // Swaps v1 and v2
    v1.swap(v2);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}