#include <iostream>
class B
{
public:
    void fun1() { std::cout << "base-1\n"; }
    virtual void fun2() { std::cout << "base-2\n"; }
    virtual void fun3() { std::cout << "base-3\n"; }
    virtual void fun4() { std::cout << "base-4\n"; }
};
class D : public B
{
public:
    void fun1() { std::cout << "derived-1\n"; }
    void fun2() { std::cout << "derived-2\n"; }
    void fun4(int x) { std::cout << "derived-4\n"; }
};
int main()
{
    B *p;
    D obj1;
    p = &obj1;
    p->fun1();
    p->fun2();
    p->fun3();
    p->fun4();
    //p->fun4(5);
    obj1.fun4(5);
    getchar();
}
