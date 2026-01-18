#include <iostream>

int main()
{
    int age;
    std::cout << "Umurmu berapa: ";
    std::cin >> age;

    std::cout << (age >= 20 ? "Sekarang sudah dewasa yaa" : "Nikmatilah masa masa mudamu kawan");
    return 0;
}
