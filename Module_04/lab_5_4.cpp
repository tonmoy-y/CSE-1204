#include<bits/stdc++.h>
using namespace std; 
class A {
    public:
    virtual void print() =0;
};
class B : public A {
    public:
    void print() {
        cout<<"Inside Print() of class B"<<endl;
    }
};

int main() {


B b;
b.print();

// A *p;
// p = &a;
// p -> print();

B *q;
q = &b;
q -> print();

    return 0;
}