#include<bits/stdc++.h>
using namespace std; 

class A {
    private:
    int x;
    public:
    friend int Add();
    friend int InX();
    friend int DecX();
    void SetX() {
        cin>>x;
    }
    int getX() {
        return x;
    }
};
A a;
int Add() {
    
    int b;
    cin>>b;
    return a.getX()+b;
}

int InX() {
   
    return a.getX()+1;
}

int DecX() {
    
    return a.getX()-1;
}


int main() {

    a.SetX();
    int sum = Add();
    int in = InX();
    int Dec = DecX();
    cout<<sum<<endl<<in<<endl<<Dec<<endl;
    return 0;
}