#include <iostream>

using namespace std;

void maksimum (float &a, float &b, float &c, float &d, float &e)
{
    int x=a;
    if (b>x)    x=b;
    if (c>x)    x=c;
    if (d>x)    x=d;
    if (e>x)    x=e;

    cout << "maksimum: " << x << endl;
}

void minimum (float &a, float &b, float &c, float &d, float &e)
{
    int x=a;
    if (b<x)    x=b;
    if (c<x)    x=c;
    if (d<x)    x=d;
    if (e<x)    x=e;

    cout << "minimum: " << x << endl;
}

void znajdywanie (float &a, float &b, float &c, float &d, float &e)
{
    float srednia = 0; float x1, x2, x3, x4, x5;
    float najmniejsza = 0;

    srednia = (a+b+c+d+e)/5;
    cout << "srednia wynosi: " << srednia << endl;

    float x = srednia;
    x1 = abs(srednia-a);
    x2 = abs(srednia-b);
    x3 = abs(srednia-c);
    x4 = abs(srednia-d);
    x5 = abs(srednia-e);

    najmniejsza = x1;
    if (x2<najmniejsza)  najmniejsza = x2;
    if (x3<najmniejsza)  najmniejsza = x3;
    if (x4<najmniejsza)  najmniejsza = x4;
    if (x5<najmniejsza)  najmniejsza = x5;

    if (najmniejsza==x1)    cout << "Liczba najblizej sredniej to: a=" << a << endl;
    if (najmniejsza==x2)    cout << "Liczba najblizej sredniej to: b=" << b << endl;
    if (najmniejsza==x3)    cout << "Liczba najblizej sredniej to: c=" << c << endl;
    if (najmniejsza==x4)    cout << "Liczba najblizej sredniej to: d=" << d << endl;
    if (najmniejsza==x5)    cout << "Liczba najblizej sredniej to: e=" << e << endl;

}

int main()
{
    float a,b,c,d,e;
    cout << "podaj 5 liczb" << endl;
    cout << "a: ";  cin >> a;
    cout << "b: ";  cin >> b;
    cout << "c: ";  cin >> c;
    cout << "d: ";  cin >> d;
    cout << "e: ";  cin >> e;

    maksimum(a,b,c,d,e);
    minimum(a,b,c,d,e);
    znajdywanie(a,b,c,d,e);


    return 0;
}
