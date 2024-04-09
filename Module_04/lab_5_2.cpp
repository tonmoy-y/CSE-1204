#include<bits/stdc++.h>
using namespace std; 

class Circuit {
    private:
    double real;
    double img;
    public:
    Circuit(int r =0, int i=0) {
        real = r;
        img = i;
    }

    Circuit operator+ (Circuit const &obj) {
        Circuit res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;

    }

    void printZ() {
        cout<<real<<" + "<<img<<"j"<<endl;
    }
Circuit operator/ (Circuit const &obj) {
    Circuit cur;
    int den = obj.real*obj.real + obj.img * obj.img;
    cur.real = (real * obj.real + img * obj.img ) /(den * 1.0);
    cur.img = (img * obj.real - real * obj.img ) /(den * 1.0);
    return cur;
}
};

int main() {
    Circuit z1(3,4), z2(4,-3), z3(0,4);
    Circuit z4;
    z4 = z1+z2;
    z4 = z4+z3;
    z4.printZ();
    
    Circuit V(100, 50);
    Circuit I;
    I = V / z4;
    I.printZ();

    return 0;
}