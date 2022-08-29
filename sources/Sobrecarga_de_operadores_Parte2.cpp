#include <iostream>

enum Fecha{ano,mes,dia,hora,minuto,segundo};

using namespace std;
class F
{
public:
    F(int m = 1, int d = 1, int a = 1900, int hora = 10, int minuto = 00, int segundo = 00)
    {
        this->m = m;
        this->a = a;
        this->d = d;
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
    F &operator++(int)
    {
        d++;
        return *this;
    }
    F operator++ ()
    {
        ++d;
        return *this;
        //return d;
    }
    F operator--(int)
    {
        d--;
        return *this;
    }
    F operator--()
    {
        --d;
        return *this;
    }

    F operator - (F f2){
        
        F nueva;
        
        if ((a < f2.a) ||
         (a == f2.a && m < f2.m) ||
          (a == f2.a && m == f2.m && d < f2.d) ||
           (a == f2.a && m == f2.m && d == f2.d && hora < f2.hora) ||
           (a == f2.a && m == f2.m && d == f2.d && hora == f2.hora && minuto < f2.minuto) ||
           (a == f2.a && m == f2.m && d == f2.d && hora == f2.hora && minuto == f2.minuto && segundo < f2.segundo))
        {
            cout << "Fecha hora 1 < Fecha hora 2" << endl;
            return *this;

        }else{
            cout << "Fecha hora 1 < Fecha hora 2" << endl;

            nueva.a = a - f2.a;
            nueva.m = m - f2.m;
            nueva.d = d - f2.d;
            nueva.hora = hora - f2.hora;
            nueva.minuto = minuto - f2.minuto;
            nueva.segundo = segundo - f2.segundo;

            return nueva;
        }
        
        
    }

private:

    unsigned int m, d, a, hora, minuto, segundo;
    friend int main();
};
int main()
{
    F f;
    f++;
    cout << f.d << endl;
    --f;
    cout << f.d << endl;

    F prueba1(11,11,2003,11,11,11);
    F prueba2(11,11,2004,11,11,11);

    F nueva;

    nueva = prueba2 - prueba1;

    cout << "Nueva fecha - " <<"Ano:" << nueva.a << " Mes:" << nueva.m << " Dias:" << nueva.d << " Hora:" << nueva.hora << " Minuto:" << nueva.minuto << " Segundo:" << nueva.segundo << endl;

    getchar();

    return 0;
}