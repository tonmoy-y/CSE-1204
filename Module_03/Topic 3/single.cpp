#include <iostream>
using namespace std;
class A
{
private:
    int ax;

public:
    A(int x)
    {
        ax = x;
    }
    ~A()
    {
        cout << "Inside destructor" << endl;
    }
    getAX()
    {
        return ax;
    }
};
class B : public A
{
private:
    int bx;

public:
    B(int x, int y) : A(x)
    {
        bx = y;
    }
    int getSum()
    {
        return (getAX() + bx);
    }
};
int main()
{
    B b(15, 10);
    cout << b.getSum() << endl;
}
