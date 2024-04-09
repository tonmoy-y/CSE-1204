#include<bits/stdc++.h>
using namespace std; 

int main() {
    tuple<int , string, double> a;
   
   a = make_tuple(100, "Kamal", 3.5);
   
   cout<<get<0>(a)<<endl;
   cout<<get<1>(a)<<endl;
   cout<<get<2>(a)<<endl;

   get<2>(a) = 3.7;
   
   tuple<int , string, double> b;
   b = make_tuple(200, "Jamal" , 3.9);
     cout<<get<0>(a)<<endl;
     a.swap(b);
   
   cout<<get<1>(a)<<endl;
        
  
    return 0;
}