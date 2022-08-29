#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 65;
    char c = 70;
    float f = 3.1416;
    cout << "i como char = " << static_cast<char>(i) << endl;
    cout << "c como int = " << static_cast<int>(c) << endl;
    cout << "f como int = " << static_cast<int>(f) << endl;


    getchar();
    return 0;
}
