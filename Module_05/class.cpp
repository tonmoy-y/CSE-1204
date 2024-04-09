#include<bits/stdc++.h>
using namespace std; 
template<typename T>

class A {
    private:
    T x, y;
    public:
    void getData(void) {
        cout<<"Enter two number: ";
        T a,b;
        cin>>a>>b;
        setData(a,b);
    }
    void setData(T x, T y) {
        this->x=x;
        this->y=y;
    }
    T sum (void) {
        T s;
        s = x+y;
        return s;
    }

};

int main() {
    A <double> ab;
   
    ab.getData();
    cout<<"Sum = "<<ab.sum()<<endl;
    return 0;
}