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
class B
{
private:
    int p = 10;

protected:
    int q = 20;

public:
    int r = 30;
    int getP()
    {
        return p;
    }
};
class C : public A, public B
{
public:
    void show()
    {
        cout << "x=" << getX() << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
        cout << "p=" << getP() << endl;
        cout << "q=" << q << endl;
        cout << "r=" << r << endl;
    }
};
int main()
{
    C c;
    c.show();
}
