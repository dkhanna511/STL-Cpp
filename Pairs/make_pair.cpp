#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("Hello Dheeraj", 1.40);
    pair<string, double> PAIR3;

    PAIR1.first = 100;
    PAIR1.second = 'a';

    PAIR3 = make_pair("wow wow wow", 1094.4);

    cout<<PAIR1.first<<"  "<<PAIR1.second<<endl;
    cout<<PAIR2.first<<"  "<<PAIR2.second<<endl;
    cout<<PAIR3.first<<"  "<<PAIR3.second<<endl;

    return 0;

}