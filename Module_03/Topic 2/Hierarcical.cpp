#include <iostream> 
using namespace std; 
class A
{
private:
    int x = 10;

protected:
    int y = 20;

public:
    int z = 30;
    int getX()
    {
        return x;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "x=" << getX() << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};
class C : public A
{
public:
    void show()
    {
        cout << "x=" << getX() << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
};
int main()
{
    B b;
    C c;
    b.show();
    c.show();
}
