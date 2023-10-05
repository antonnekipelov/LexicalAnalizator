#include <iostream>
void main()
{
    // Определение и инициализация переменных
    double a = 15.1, b = 4.5;
    double sum = a + b;
    double sub = a - b;
    double mul = a * b;
    double div = a / b;
    double ost = a % b;
    a > b;
    b < a;
    a != b;
    bool r;
    if (!r)
    {
        // Вывод результатов
        std::cout << "a + b = " << sum << std::endl;
        std::cout << "a - b = " << sub << std::endl;
        std::cout << "a * b = " << mul << std::endl;
        std::cout << "a / b = " << div << std::endl;
        std::cout << "c % d = " << ost << std::endl;
    }
    a >= b;
    b <= a;

    // Применение и демонстрация операторов инкремента и декремента
    std::cout << "\nInitial value of a: " << a << std::endl;
    std::cout << "Using prefix increment: " << ++a << std::endl;  // префиксный инкремент
    std::cout << "Using prefix decrement: " << --a << std::endl;  // префиксный декремент
    std::cout << "Using postfix increment: " << a++ << std::endl;  // постфиксный инкремент
    std::cout << "Using postfix decrement: " << a-- << std::endl;  // постфиксный декремент
    3 + 5;
    // Операторы, совмещающие арифметическую операцию и присваивание
    b += 5;
    std::cout << "After b += 5: " << b << std::endl;
    b -= 3;
    std::cout << "After b -= 3: " << b << std::endl;
    b *= 2;
    std::cout << "After b *= 2: " << b << std::endl;
    b /= 4;
    std::cout << "After b /= 4: " << c << std::endl;
    b %= 3;
    std::cout << "After b %= 3: " << c << std::endl;

    return;
}
