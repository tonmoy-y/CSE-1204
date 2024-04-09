#include<bits/stdc++.h>
using namespace std; 

int main() {
    pair<int , string> px;
    px = { 10, "Rajshahi"};
    cout<<px.first;
    
    cout<<px.second<<endl;
    get<0>(px) = 20;
    cout<<px.first<<endl;
    pair<int , string > bx;
    bx = { 30, "Dhaka"};

        cout<<"Before swapping: "<<endl;
     cout<<bx.second;
     cout<<"   ";
    cout<<bx.first<<endl;

    px.swap(bx);
    cout<<"After swapping: "<<endl;
     cout<<bx.second;
     cout<<"   ";
    cout<<bx.first<<endl;

    return 0;
}