#include<bits/stdc++.h>
using namespace std; 

int main() {
    int j;
    array<int,10> ax = {10,60,30,70,20};
    cout<<"Enter index: ";
     cin>>j;
   cout<<"ax.at("<<3<<") = "<<ax.at(3-1)<<endl;
    cout<<"Front = "<<ax.front()<<endl;
    cout<<"Back = "<<ax.back()<<endl;
    ax.fill(9);
    for(auto i: ax )
    cout<<ax.at(i)<<"-";
    cout<<endl;
    if(ax.empty()) cout<<"The 6th index is empty"<<endl;
    else cout<<"It's not empty"<<endl;
    cout<<"Size = "<<ax.size()<<endl;


    cout<<"Max size = "<<ax.max_size()<<endl;
    // cout<<"First element = "<<ax.begin()

    return 0;
}