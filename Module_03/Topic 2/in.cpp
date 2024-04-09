#include<bits/stdc++.h>
using namespace std; 

class Father {
    private:
    int money = 40;
    protected:
    int gold = 30 ;
    public:
    int land =10;
};

class Son: public Father {
    public:
    void get_land()
    {
        cout<<"Son accessed "<<land<<" Land(public) from Father."<<endl;
    }
    void get_gold()
    {
        cout<<"Son accessed "<<gold<<" Gold(protected) from Father ."<<endl;
    }
    void get_money()
    {
        cout<<"Son can't access money from Father"<<money<<endl;
    }

};



class GrandSon : public Son {
    public:
    void get_land()
    {
        cout<<"Son accessed "<<land<<" Land(public) from Father."<<endl;
    }
    void get_gold()
    {
        cout<<"Son accessed "<<gold<<" Gold(protected) from Father ."<<endl;
    }
    void get_money()
    {
        cout<<"Son can't access money from Father"<<money<<endl;
    }

};



int main() {
    int n;
    
    return 0;
}