#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double num3;
    double num4;
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

    std::cout << "Masukkan angka ke-tiga: ";
    std::cin >> num3;

    std::cout << "Masukkan angka ke-empat: ";


    switch (op)
    {
    case 1:
        result = num1 + num2 + num3;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case 2:
        result = num1 - num2 - num3;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case 3:
        result = num1 * num2 * num3;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    case 4:
        result = num1 / num2 / num3;
        std::cout << "hasilnya adalah " << result << '\n';
        break;
    default:
        std::cout << "Opsi yang kamu masukkan tidak sesuai\n!";
        break;
    }

    std::cout << "==================================";

    return 0;
}
