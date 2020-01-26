#include <iostream>

using namespace std;

int foo(int a, int b, int f, int x){
    cout << "Введите а, b, f : "<<endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "f = ";
    cin >> f;
    cout << "Вычисляется по формуле: x = (а + b — f / а) + f * a * a — (a + b)" << endl;
    x = (a + b- f / a) + f * a * a - (a + b);
    std::cout << "x = " << x << std::endl;
}

int main()
{
    int a,b,f,x;
    foo(a,b,f,x);
}
