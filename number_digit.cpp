#include <iostream>

using namespace std;

int foo(int n){
    std::cin >> n;
    if(n > 0 && n < 100000){
    int a = n / 10000;
    std::cout << "Первое число = " << a << std::endl;
    int b = (n % 10000 - n % 1000) / 1000;
    std::cout << "Второе число = " << b << std::endl;
    int c = (n % 1000 - n % 100)/ 100;
    std::cout << "Третье число = " << c << std::endl;
    int d = (n % 100 - n % 10)/ 10;
    std::cout << "Четвертое число = " << d << std::endl;
    int e = n % 10;
    std::cout << "Пятое число = " << e << std::endl;
    }
    else {
        std::cout << "Ошибочка вышла, введите пятизначное число" << std::endl;
        foo(n);
    }
}

int main()
{
    int n;
    std::cout << "Введите число до 5 знаков" << std::endl;
    foo(n);
    
}
