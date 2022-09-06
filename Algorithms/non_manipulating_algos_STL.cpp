#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // For accumulate operation
using namespace std;

int main()
{
    //Initialize vector with array values.
    int arr[] = {10, 20, 5, 23, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    //this is how you store an array into a vector
    vector<int> vect(arr, arr+n);

    cout<<"Vector is : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<vect[i]<<"  ";
    }

    //Sorting a vector in ascending order
    sort(vect.begin(), vect.end());

    cout<<"Vector after sorting is : "<<endl;
    for(int i = 0 ; i < n; i++)
    {
        cout<<vect[i]<<"  ";
    }

    //Revering the vector
    reverse(vect.begin(), vect.end());
    cout<<"\nVector after reversing : "<<endl;
    
    for(int i = 0; i< n; i++)
    {
        cout<<vect[i]<<"  ";
    }


    //max element of the vector
    cout<<"\nMaximum element of the vector is : "<<*max_element(vect.begin(), vect.end())<<endl;

    //Minimum element of the vector
    cout<<"Minimum element of the vector is : "<<*min_element(vect.begin(), vect.end())<<endl;

    //The summation of all the emements
    cout<<"Summation of all the elements using accumulate : "<<accumulate(vect.begin(), vect.end(), 0)<<endl;

    //Calculating the number of occurances of an element
    cout<<"Occurance of 20 in a vector : "<<count(vect.begin(), vect.end(), 20)<<endl;

    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),20) != vect.end()?
                         cout << "\nElement found"<<endl:
                     cout << "\nElement not found"<<endl;

    
    return 0;


}