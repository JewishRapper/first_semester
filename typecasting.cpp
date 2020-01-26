#include <iostream>

using namespace std;

int mToKm(int m, float km){
    cout << "\t\t\tПеревод числа из метров в километры" <<endl;
    cout << "Введите количество метров: ";
    cin >> m;
    km = (float) m / 1000;
    cout << m << " метров будет " << km << " километров" <<endl; 
}

int main()
{
    int m;
    float km;
    mToKm(m, km);
    
}
