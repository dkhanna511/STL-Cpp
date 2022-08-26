#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<string, double> PAIR2("Hello world", 100.2);

    cout<<PAIR2.first<<"    "<<PAIR2.second<<endl;
    return 0;
}