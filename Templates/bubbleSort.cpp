#include <iostream>
using namespace std;


//A template function to implement bubble sort.
//We can use this for any data type that supports comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], int n)
{
    for(int i = 0; i < n -1 ; i++)
    {
        for(int j = n -1 ; i < j; j--)
         {
             if(a[j] < a[j-1])
                 swap(a[j], a[j-1]);
         }
    }
}

int main()
{
    int a[5] = {10, 50, 34,13,45};
    int n  = sizeof(a) / sizeof(a[0]);

    //Calls template function
    bubbleSort<int>(a, n);
    cout<<"sorted array : "<<endl;
    for(int i = 0; i < n; i++)
       cout<<a[i]<<"  "<<endl;
    cout<<endl;
    return 0;
}
