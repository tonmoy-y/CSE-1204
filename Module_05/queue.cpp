#include<bits/stdc++.h>
using namespace std; 

int main() {
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    cout << "front=" << qu.front() << endl;
    cout << "back=" << qu.back() << endl;
    cout << "size=" << qu.size() << endl;
    qu.pop();
    qu.pop();
    qu.pop();
    if(qu.empty()) cout<<"queue empty"<<endl;
    return 0;
}