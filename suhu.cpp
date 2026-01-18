#include <iostream>

int main()
{
    double suhu;
    char unit;

    std::cout << "============Pendeteksi Suhu============\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "Pilih satuan suhu yang mau dibuat: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Masukkan jumlah suhu dalam Fahrenheit: ";
        std::cin >> suhu;

        suhu = (1.8 * suhu) + 32.0;
        std::cout << "suhunya adalah " << suhu << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Masukkan jumlah suhu dalam Celcius: ";
        std::cin >> suhu;

        suhu = (suhu - 32) / 1.8;
        std::cout << "Suhunya adalah " << suhu << "C\n";
    }
    else
    {
        std::cout << "Tolong pilih satuan suhu yang sesuai (C / F)\n";
    }

    std::cout << "=======================================";

    return 0;
}
