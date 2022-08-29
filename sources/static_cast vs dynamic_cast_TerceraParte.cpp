#include <iostream>
using namespace std;

class B
{
public:
    virtual ~B(){};
};
class D : public B
{
};
int main()
{
    int menu = 1;
    while (menu)
    {
        B *b = new D;
        D *d = dynamic_cast<D *>(b); // Compila!

        cout << "Compilo!!!!";
        cin >> menu;
    }

    return 0;
}
