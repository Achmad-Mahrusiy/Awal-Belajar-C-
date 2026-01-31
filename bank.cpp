#include <iostream>
#include <iomanip>

void isiSaldo(double saldo);
double deposit();
double withdraw(double saldo);

int main()
{
    double saldo = 0;
    int pilihan = 0;

    do
    {
        std::cout << '\n';
        std::cout << "*******************\n";
        std::cout << "******* MENU ******\n";
        std::cout << "*******************\n";
        std::cout << "1. Lihat tabungan\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw uang\n";
        std::cout << "4. Exit\n";
        std::cout << "Masukkan menu yang anda pilih: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            isiSaldo(saldo);
            break;
        case 2:
            saldo += deposit();
            isiSaldo(saldo);
            break;
        case 3:
            saldo -= withdraw(saldo);
            isiSaldo(saldo);
            break;
        case 4:
            std::cout << "Terima Kasih sudah menggunakan aplikasi ini!\n";
            break;
        default:
            std::cout << "Invalid Input!\n";
        }
    } while (pilihan != 4);

    return 0;
}

void isiSaldo(double saldo)
{
    std::cout << "Saldomu adalah $" << std::setprecision(2) << std::fixed << saldo << '\n';
}

double deposit()
{

    double isi = 0;

    std::cout << "Masukkan jumlah depositnya: ";
    std::cin >> isi;

    if (isi > 0)
    {
        return isi;
    }
    else
    {
        std::cout << "Angka deposit tidak valid!\n";
        return 0;
    }
}

double withdraw(double saldo)
{

    double isi = 0;

    std::cout << "Masukkan uang yang mau diambil: ";
    std::cin >> isi;

    if (isi > saldo)
    {
        std::cout << "jumlah saldo yang anda masukkan tidak memadai!\n";
        return 0;
    }
    else if (isi < 0)
    {
        std::cout << "jumlah saldo yang anda masukkan tidak valid!\n";
        return 0;
    }
    else
    {
        return isi;        
    }
}
