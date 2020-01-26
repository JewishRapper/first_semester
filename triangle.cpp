#include <iostream>
 
using namespace std;
 
int main() {
    int h;
    char s = '*';
    std::cout << "Введите высоту прямугольного треугольника: ";
    cin >> h;
    for(int i = 0; i <= h; i++){
        for(int j = 0; j <=i; j++){
            cout <<s;
        }
        cout <<endl;
    }
}
