#include <iostream>

double Luas(double panjang, double lebar);
double keliling(int d, double panjang, double lebar);

int main()
{
    double panjang = 8;
    double lebar = 8;
    int d = 2;
    double luas = Luas(panjang, lebar);
    double Keliling = keliling(d, panjang, lebar);

    std::cout << "Keliling persegi panjang adalah: " << Keliling << " cm. \n";
    std::cout << "Luas persegi panjang adalah: " << luas << " cm^2. \n";

    return 0;
}

double Luas(double panjang, double lebar)
{
    return panjang * lebar;
}

double keliling(int d, double panjang, double lebar)
{
    return d * panjang + lebar * d;
}

/*luas persegi (L = p x l)
keliling persegi panjang (K = 2 * (p + l))*/
