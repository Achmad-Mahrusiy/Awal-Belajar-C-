#include <iostream>

double Luas(double sisi);
double keliling(double sisi);
std::string gabungan(std::string string1, std::string string2);

int main()
{
    std::string namadepan;
    std::string namabelakang;
    std::string namalengkap = gabungan(namadepan, namabelakang);

    std::cout << "Rumus persegi panjang\n";

    double sisi;
    double luas = Luas(sisi);
    double Keliling = keliling(sisi);

    std::cout << "Halo " << namalengkap << '\n';

    std::cout << "Keliling persegi panjang adalah: " << Keliling << " cm. \n";
    std::cout << "Luas persegi panjang adalah: " << luas << " cm^2. \n";

    return 0;
}

std::string gabungan(std::string string1, std::string string2)
{
    std::cout << "Masukkan nama depan anda: ";
    std::cin >> string1;

    std::cout << "Masukkan nama belakang anda: ";
    std::cin >> string2;

    return string1 + " " + string2;
}

double keliling(double sisi)
{
    std::cout << "Masukkan ukurannya: ";
    std::cin >> sisi;

    return sisi + sisi + sisi + sisi;
}

double Luas(double sisi)
{
    std::cout << "Masukkan ukurannya: ";
    std::cin >> sisi;

    return sisi * sisi;
}

/*luas persegi (L = s x s)
keliling persegi panjang (s + s + s + s)*/


/*Gabut banget anjr, ya beginilah hidup bro!*/
