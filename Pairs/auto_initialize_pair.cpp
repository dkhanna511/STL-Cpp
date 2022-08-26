#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, double> PAIR1;
    pair<string, char> PAIR2;

    //It is initialized to 0;
    cout<<PAIR1.first<<endl;
    //It is initialized to 0;
    cout<<PAIR1.second<<endl;

    cout<<" ";

    //It prints nothing . i.e. NULL
    cout<<PAIR2.first<<endl;
    //It also prints nothing. i.e. NULL
    cout<<PAIR2.second<<endl;

    return 0;

}