#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "============Calculator============\n";

    std::cout << "Opsi kalkulator\n";
    std::cout << "1. penjumlahan( + ).\n";
    std::cout << "2. pengurangan( - ).\n";
    std::cout << "3. perkalian( * ).\n";
    std::cout << "4. pembagian( / ).\n";
    std::cout << "Masukkan opsi (1 - 4): ";
    std::cin >> op;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> num1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    default:
        std::cout << "Opsi yang kamu masukkan tidak sesuai\n!";
        break;
    }

    std::cout << "==================================";

    return 0;
}
