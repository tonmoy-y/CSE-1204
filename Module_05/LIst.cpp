
#include <bits/stdc++.h>
using namespace std;

bool isOdd(int value)
{
    return (value % 2) == 1;
}

void Display(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
}
void DisplayR(list<int> g)
{
    list<int>::reverse_iterator it;
    for (it = g.rbegin(); it != g.rend(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
}
int main()
{
    list<int> ar;
    list<int>::iterator p, q;
    ar.push_back(30);
    ar.push_back(21);
    ar.push_back(21);
    ar.push_front(21);
    DisplayR(ar);
    Display(ar);
    DisplayR(ar);
    cout << "front=" << ar.front() << endl;
    cout << "back=" << ar.back() << endl;

    p = ar.begin();
    ar.insert(p, 11);
    Display(ar);

    p = ar.end();
    ar.insert(p, 27);
    Display(ar);
    p = find(ar.begin(), ar.end(), 30);
    ar.insert(p, 22);
    if (p == ar.end())
        cout << "Not found" << endl;
    else
        cout << "Found address=" << &p << endl;
    Display(ar);
    p = find(ar.begin(), ar.end(), 30);
    advance(p, 1);
    ar.insert(p, 26);
    if (p == ar.end())
        cout << "Not found" << endl;
    else
        cout << "Found address=" << &p << endl;
    Display(ar);
    p = ar.begin();
    ar.erase(++p);
    Display(ar);
    p = find(ar.begin(), ar.end(), 30);
    ar.erase(p);
    Display(ar);
    p = ar.begin();
    q = ar.begin();
    advance(q, 1);
    ar.erase(p, q);
    Display(ar);
    ar.remove(28);
    Display(ar);
    cout << "Remove if" << endl;
    Display(ar);
    int mc;
    Display(ar);
    mc = count(ar.begin(), ar.end(), 22);
    cout << "Count=" << mc << endl;
    Display(ar);
    mc = count_if(ar.begin(), ar.end(), isOdd);
    cout << "Count odd=" << mc << endl;
    list<int> br;
    br.assign(7, 100);
    Display(br);
    br.assign(ar.begin(), ar.end());
    Display(br);
    int myints[] = {1776, 7};
    br.assign(myints, myints + 2);
    Display(br);
    cout << "Unique value deletion" << endl;
    ar.sort();
    ar.unique();
    Display(ar);
}
