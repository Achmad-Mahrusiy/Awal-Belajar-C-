#include <iostream>

int main()
{
    int month;
    std::cout << "Sekarang bulan ke-berapa?(1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Sekarang bulan januari!";
        break;
    case 2:
        std::cout << "sekarang bulan februari";
        break;
    case 3:
        std::cout << "sekarang bulan maret";
        break;
    case 4:
        std::cout << "Sekarang bulan april";
        break;
    case 5:
        std::cout << "Sekarang bulan mei";
        break;
    case 6:
        std::cout << "Sekarang bulan juni";
        break;
    case 7:
        std::cout << "Sekarang bulan juli!";
        break;
    case 8:
        std::cout << "sekarang bulan agustus";
        break;
    case 9:
        std::cout << "sekarang bulan september";
        break;
    case 10:
        std::cout << "Sekarang bulan oktober";
        break;
    case 11:
        std::cout << "Sekarang bulan november";
        break;
    case 12:
        std::cout << "Sekarang bulan december";
        break;
    default:
        std::cout << "Angka yang kamu masukkan tidak valid";
        break;
    }

    return 0;
}
