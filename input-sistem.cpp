#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "Masukkan namamu: ";
    std::cin >> name;

    std::cout << "Berapa Umurmu: ";
    std::cin >> age;

    std::cout << "Halo " << name << " berumur " << age << " tahun";
    
    return 0;
}
