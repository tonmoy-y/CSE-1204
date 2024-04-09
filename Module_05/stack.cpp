#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    cout << "front=" << st.top() << endl;
    cout << "size=" << st.size() << endl;
    st.pop();
    st.pop();
    st.pop();
    if(st.empty()) cout<<"stack empty"<<endl;
    return 0;
}