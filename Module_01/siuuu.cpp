#include <bits/stdc++.h>
using namespace std;
int main(){
    string equation;
    cout << "Enter an equation: ";
    getline(cin, equation);
    cout << "You entered: " << equation << endl;
double A, B, C;
    cout << "Enter A, B, and C for the given equation (Ax + By = C): ";
    cin >> A >> B >> C;
    double slope = -A / B;
    double perpendicular_slope = -1 / slope;
cout << "The perpendicular equation is: " << perpendicular_slope << "y -x= " << endl;
return 0;
}