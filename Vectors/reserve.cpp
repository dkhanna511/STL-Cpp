#include<chrono>
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using namespace std::chrono;

int main()
{
    //Number of characters
    int N = (int)1e6;

    vector<int> v1, v2;

    //Reserve space in v2
    v2.reserve(N);

    //Start filling up elements in v1
    auto start = high_resolution_clock::now();
    for(int i = 0; i<N; i++)
    {
        v1.push_back(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout<<"Method I took "<<duration.count()<<"  microseconds\n";

    //Start filing up elements in v2
    start = high_resolution_clock::now();
    for(int i = 0; i<N;i++)
    {
        v2.push_back(i);
    }
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);

    cout<<"method II took "<<duration.count()<<"   microseconds \n";
    
    return 0;

}