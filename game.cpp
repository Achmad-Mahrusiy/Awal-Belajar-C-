#include <iostream>
#include <ctime>

char pilihan_user();
char pilihan_komputer();
void lihat_pilihan(char pilihan);
void lihat_pemenang(char pemain, char komputer);

int main()
{
    char pemain;
    char komputer;

    pemain = pilihan_user();
    std::cout << "Pilihan anda: ";
    lihat_pilihan(pemain);

    komputer = pilihan_komputer();
    std::cout << "pilihan komputer: ";
    lihat_pilihan(komputer);

    lihat_pemenang(pemain, komputer);

    return 0;
}

char pilihan_user()
{

    char pemain;
    std::cout << "\nGame Gunting-Batu-Kertas!\n\n";

    do
    {
        std::cout << "Pilih salah satu dari daftar yang sudah tertera dibawah!\n";
        std::cout << "--------------------------------------------------------\n";
        std::cout << "'g' untuk Gunting\n";
        std::cout << "'b' untuk Batu\n";
        std::cout << "'k' untuk Kertas\n";
        std::cout << "Masukkan pilihan anda: ";
        std::cin >> pemain;

    } while (pemain != 'g' && pemain != 'b' && pemain != 'k');

    return pemain;
}

char pilihan_komputer()
{

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'g';
    case 2:
        return 'b';
    case 3:
        return 'k';
    }

    return 0;
}

void lihat_pilihan(char pilihan)
{
    switch (pilihan)
    {
    case 'g':
        std::cout << "Gunting\n";
        break;
    case 'b':
        std::cout << "Batu\n";
        break;
    case 'k':
        std::cout << "Kertas\n";
        break;
    default:
        std::cout << "pilihan anda tidak sesuai!\n";
    }
}

void lihat_pemenang(char pemain, char komputer)
{

    switch (pemain)
    {
    case 'g':
        if (komputer == 'g')
        {
            std::cout << "Seri!\n";
        }
        else if (komputer == 'b')
        {
            std::cout << "Kamu kalah!\n";
        }
        else
        {
            std::cout << "Kamu Menang!\n";
        }
        break;
    case 'b':
        if (komputer == 'g')
        {
            std::cout << "Kamu Menang!\n";
        }
        else if (komputer == 'b')
        {
            std::cout << "Seri!\n";
        }
        else
        {
            std::cout << "Kamu Kalah!\n";
        }
        break;
    case 'k':
        if (komputer == 'g')
        {
            std::cout << "Kamu Kalah!\n";
        }
        else if (komputer == 'b')
        {
            std::cout << "Kamu Menang!\n";
        }
        else
        {
            std::cout << "seri!\n";
        }
        break;
    }
}
