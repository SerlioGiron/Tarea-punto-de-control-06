#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NT
{
    string a, i, l;

public:
    friend ostream &operator<<(ostream &o, const NT &n);
    friend istream &operator>>(istream &i, NT &n);
};
ostream &operator<<(ostream &o, const NT &n)
{
    o << "(" << n.a << ") " << n.i << "-" << n.l;
    return o;
}
istream &operator>>(istream &i, NT &n)
{
    i.ignore();
    i >> setw(3) >> n.a;
    i.ignore(2);
    i >> setw(4) >> n.i;
    i.ignore();
    i >> setw(4) >> n.l;
    return i;
}
int main()
{
    NT t;
    cout << "Telefono en la forma (504) 3193-9169:" << endl;
    cin >> t;
    cout << "Telefono: " << t << endl;
}