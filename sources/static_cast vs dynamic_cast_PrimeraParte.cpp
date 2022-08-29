class B
{
};
class D : public B
{
};
class X
{
};
int main()
{
    D *d = new D;
    B *b = static_cast<B *>(d); // Esto trabaja!
    //X *x = static_cast<X *>(d); // ERROR - No compila
    //getchar();
    return 0;
}
