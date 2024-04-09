#include<bits/stdc++.h>
using namespace std; 
   
class Test {
    private:
    int x;
    int y;
   static int z ;
    public:
   static int sum ;
int max = -1;
int objNum;

    Test () {
        x=0;
        y=0;
        z++;
         if(y>=max) {
            max=y;
            objNum=z;}
    }

    Test(int x, int y) {
        this->x = x;
        this->y = y;
        z++;
        sum+=x;
        if(y>max) objNum=z;
    }

    Test(Test &obj) {
        x = obj.x;
        y = obj.y;
        z++;
        sum+=x;
         if(y>max) objNum=z;
    }

    void setData(int x, int y) {
        this->x = x;
        this->y = y;
        sum+=x;
         if(y>max) objNum=z;
    }
    void displayZ() {
        cout<<"z = "<<z<<endl;
    }
  
};

int Test :: z=0;
int Test :: sum =0;

int main() {
    Test obj1, obj2(6, 18);
    Test obj3(obj2);
    Test obj4;
    obj4.displayZ();
    obj4.setData(23, 67);
    Test obj5(89,103 );
    cout<<"Sum of x is "<<obj5.sum<<endl;
    cout<<"The object number whose y value is maximum = "<<obj5.objNum<<endl;
    return 0;
}