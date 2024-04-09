#include <bits/stdc++.h>
 using namespace std;
 class A
{
private:
    int ax = 10;

public:
    A()
    {
        cout << "Constructor of A called\n";
        cout << "Enter value of ax: ";
    }
    int getax()
    {
        return ax;
    }
    ~A()
    {
        cout << "Destrusctor of A called\n";
    }
};
class B : virtual public A
{
private:
    int bx = 20;

public:
    B()
    {
        cout << "Constructor of B called\n";
        cout << "Enter value of bx: ";
    }
    int getbx()
    {
        return bx;
    }
    ~B()
    {
        cout << "Destrusctor of B called\n";
    }
};
class C : virtual public A
{
private:
    int cx = 30;

public:
    C()
    {
        cout << "Constructor of C called\n";
        cout << "Enter value of cx: ";
    }
    int getcx()
    {
        return cx;
    }
    ~C()
    {
        cout << "Destrusctor of C called\n";
    }
};
class D : virtual public B, virtual public C
{
private:
    int dx = 40;

public:
    D()
    {
        cout << "Constructor of D called\n";
        cout << "Enter value of dx: ";
    }
    int sum()
    {
        return getax() + getbx() + getcx() + dx;
    }
    ~D()
    {
        cout << "Destrusctor of D called\n";
    }
};
int main()
{
    D d;
    cout << "The Sum is " << d.sum() << endl;
    return 0;
}
