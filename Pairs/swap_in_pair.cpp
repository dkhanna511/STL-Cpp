#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<char ,int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('D', 5);

    cout<<"Before Swapping"<<endl;
    cout<<"Contents of pair 1 =  "<<pair1.first<<"  "<<pair1.second<<endl;
    cout<<"Contents of pair 2 =  "<<pair2.first<<"  "<<pair2.second<<"\n\n"<<endl;
    

    pair1.swap(pair2);
    cout<<"After Swapping"<<endl;
    cout<<"Contents of pair 1 =  "<<pair1.first<<"  "<<pair1.second<<endl;
    cout<<"Contents of pair 2 =  "<<pair2.first<<"  "<<pair2.second<<"\n\n"<<endl;
    
}