#include<bits/stdc++.h>
using namespace std; 

int main() {
    int i;
    int ax[5] = {10,20,30,40,50};
    cout<<"Enter index: ";
     cin>>i;
    try {
       
        if(i>5)
        throw "Out of Range Error";
        else  if (i<=5 and i>0)throw i;
        else throw 3.3;
    }
    catch (int x) {
         cout<<"ax["<<x<<"]="<<ax[x-1]<<endl;
    }
    catch(char const *ex) {
        cout<<ex<<endl;
    }
    catch(...) {
        cout<<"Blocks doesn't match"<<endl;
    }
   
   
    return 0;
}