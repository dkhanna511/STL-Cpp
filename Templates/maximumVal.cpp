#include <iostream>
using namespace std;

//One function works for all data types. This would work even for user defined types if operator '>' is overloaded.
template <typename T> T myMax(T x, T y)
{
		return (x > y) ? x:y;
}

int main()
{
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<double>(3.0, 7.4) << endl;
    cout << myMax<char>('g', 'e') << endl;
    return 0;
}
