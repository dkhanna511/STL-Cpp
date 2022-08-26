#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<string, int> g1;
    pair<string, int> g2("Quiz", 3);
    pair<string, int> g3(g2);
    pair<int, int> g4(5, 10);

    g1 = make_pair("Dheeraj Hey", 102);
    g2.first = "heyaaa";
    g2.second = 283;

    cout<<"g1 : "<<g1.first<<"  "<<g1.second<<endl;
    cout<<"g3 : "<<g3.first<<"  "<<g3.second<<"   This pair was initizalized as a copy of pair g2"<<endl;
    cout<<"g2 : "<<g2.first<<"  "<<g2.second<<" The value of this pair changed after initlization"<<endl;
    cout<<"g4 : "<<g4.first<<"  "<<g4.second<<endl;
    cout<<"Addition of the values of g4 pair is : "<<g4.first + g4.second<<endl;
    cout<<"We can concatenate strings by addition in pair like : g1 + g2 + g3 "<<g1.first + g2.first + g3.first<<endl;

    cout<<"g1 before swaping with g2 : "<<g1.first<<"  "<<g1.second<<endl;
    cout<<"g2 before swaping with g1 : "<<g2.first<<"  "<<g2.second<<endl;
    g1.swap(g2);
    cout<<"After Swaping g1 and g2"<<endl;
    cout<<"g1 :"<<g1.first<<"  "<<g1.second<<endl;
    cout<<"g2 : "<<g2.first<<"  "<<g2.second<<endl;

    return 0;
}