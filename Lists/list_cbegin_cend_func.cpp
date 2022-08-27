// C++ program to illustrate the
// cbegin() function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // declaration of list
    list<int> lis = { 5, 6, 7, 8, 9 };
 
    // Prints the first element
    cout << "The first element is: " << *lis.cbegin();
 
    // printing list elements
    cout << "\nList: ";
 
    for (auto it = lis.cbegin(); it != lis.end(); ++it)
        cout << *it << " ";
 
    return 0;
}