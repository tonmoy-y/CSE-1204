#include<bits/stdc++.h>
using namespace std; 
class A {
    public:
    void print() {
        cout<<"Inside Print() of class A"<<endl;
    }
};
class B : public A {
    public:
    void print() {
        cout<<"Inside Print() of class B"<<endl;
    }
};
int main() {
A a;
a.print();
B b;
b.print();

A *p;
p = &a;
p -> print();

B *q;
q = &b;
q -> print();

    return 0;
}