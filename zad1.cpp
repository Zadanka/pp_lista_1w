#include<iostream>

using namespace std;

int a,b,c,m;
int main()
{
    cout << "Podaj trzy liczby oddzielone spacja" << endl;
    cin >>a>>b>>c;
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    cout << "Wartosc maksymalna: " << m << endl;


    return 0;
}
