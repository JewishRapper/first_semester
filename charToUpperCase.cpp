#include <iostream>

using namespace std;

int charToUpperCase(char str){
    cout << "Введите букву в нижнем регистре"<<endl;
    cin >> str;
    str -= 32;
    cout << "Ваша буква в верхнем регистре: "<< str;
}

int main()
{
    char str;
    charToUpperCase(str);
    
}
