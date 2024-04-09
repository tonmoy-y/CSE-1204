#include <iostream> 
using namespace std;

class A
{
private:
int ax; public:
A(int x)
{
ax=x;
}
~A()
{
cout<<"Inside destructor"<<endl;
}
int getAX()
{
return ax;
}
};
class B
{
private:
int bx; public:
B(int y)
{
bx=y;
}
int getBX()
{
return bx;
}
};
class C : public A, public B
{
private:
int cx; public:
C(int x,int y,int z) : A(x) , B(y)
{
cx=z;
}
int getSum()
{
return (getAX()+getBX()+cx);
}
};
int main()
{
C c(15,10,5);
cout<<c.getSum()<<endl;
}
