#include <iostream>

int sum(int a, int b) {
    return a * b;
}

int minus(int, int);

int main()
{
    cout << "Hello World!\n";   //синтаксическая ошибка (надо написать std::cout)

    int a = 5;
    int b = 2;

    std::cout << sum(a, b);  //семантическая ошибка (функция sum должна вернуть (a + b) )

    std::cout << minus(a, b);  // ошибка линковки  (надо написать определения функции minus)

    return 0;
}