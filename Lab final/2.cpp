#include<bits/stdc++.h>
using namespace std; 

class A {
    private:
    int a, b;
    public:
    void setvalue( int a, int b) {
        this->a = a;
        this->b = b;
    }
    friend void mean(A &s);
    // void display() {
        
    // }
    void display () {
        cout<<"From setvalue()  a = "<<a<<endl;
        cout<<"From setvalue()  b = "<<b<<endl;
    }
};

void mean(A &s) {
    cout<<"From mean() a = "<< s.a<<endl;;
    cout<<"From mean() b = "<<s.b<<endl;;
}

int main() {
    A x;
    x.setvalue(5,7);
    x.display();
    mean(x);

    return 0;
}