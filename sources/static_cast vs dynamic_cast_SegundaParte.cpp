class B {};
class D : public B {};
int main() {
 B* b = new D;
 //D* d = dynamic_cast<D*>(b); // ERROR - No compila
 return 0;
}
