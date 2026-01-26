#include <iostream>

double Luas(double sisi);
double keliling(double sisi);

int main()
{
    double sisi = 8;
    double luas = Luas(sisi);
    double Keliling = keliling(sisi);

    std::cout << "Keliling persegi panjang adalah: " << Keliling << " cm. \n";
    std::cout << "Luas persegi panjang adalah: " << luas << " cm^2. \n";

    return 0;
}

double Luas(double sisi)
{
    return sisi * sisi;
}

double keliling(double sisi)
{
    return sisi + sisi + sisi + sisi;
}

/*luas persegi (L = s x s)
keliling persegi panjang (s + s + s + s)*/
