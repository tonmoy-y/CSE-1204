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
    int getAX()
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
    int getBX()
    {
        return bx;
    }
};
class C : public B
{
private:
    int cx;

public:
    C(int x, int y, int z) : B(x, y)
    {
        cx = z;
    }
    int getSum()
    {
        return (getAX() + getBX() + cx);
    }
};
int main()
{
    C c(15, 10, 5);
    cout << c.getSum() << endl;
}
