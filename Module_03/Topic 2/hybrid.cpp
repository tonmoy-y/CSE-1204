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
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
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
    D d;
    d.show();
}
