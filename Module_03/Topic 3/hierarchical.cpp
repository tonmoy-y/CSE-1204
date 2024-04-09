#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int ax;

public:
    A()
    {
        ax = 10;
        cout << "ax Initialized" << endl;
    }
    int getax()
    {
        return ax;
    }
    ~A()
    {
        cout << "Class A Destructor" << endl;
    }
};

class B : public A
{
private:
    int bx;

public:
    B()
    {
        bx = 20;
        cout << "bx Initialized" << endl;
    }
    int getbx()
    {
        return bx;
    }

    ~B()
    {
        cout << "Class B Destructor" << endl;
    }
};

class C : public A
{
private:
    int cx;

public:
    C()
    {
        cx = 30;
        cout << "cx Initialized" << endl;
    }
    int sumac()
    {
        return cx + getax();
    }
    ~C()
    {
        cout << "Class C Destructor" << endl;
    }
};

int main()
{
    B b;
    C c;
    cout << "Sum of ax,bx and cx = " << b.getbx() + c.sumac() << endl;
    return 0;
}
