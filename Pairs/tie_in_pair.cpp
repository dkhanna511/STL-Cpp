#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> pair1={1,2};
    int a, b;
    tie(a, b) = pair1;
    cout<<"a : "<<a<<"  b : "<<b<<endl;

    pair<int, int> pair2 = {3, 4};
    tie(a, ignore) = pair2;

    //Prints old value of b
    cout<<"a : "<<a<<"  b : "<<b<<endl;

    pair<int, pair<int, char> > pair3 = {3, {4, 'c'} };
    int x, y;
    char z;

    //tie(x,y,z) = pair3; gives compilation error
    //tie(x, tie(y,z)) = pair3; Gives compilation error
    //Each pair needs to be explicitly handled.
    x = pair3.first;
    tie(y, z) = pair3.second;
    cout<<x<<"  "<<y<<"  "<<z<<endl;
    return 0;

}