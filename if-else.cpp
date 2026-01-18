#include <iostream>
#include <cmath>

int main()
{
    int age;

    std::cout << "Berapa umurmu: ";
    std::cin >> age;

    if (age <= 18)
    {
        std::cout << "Halooo!!!!";
    }
    else if (age <= 50)
    {
        std::cout << "Gimana kabarmu kawan!, Kamu sudah dewasa ya!";
    }
    else
    {
        std::cout << "Nikmatiah masa masa hidupmu dengan anakmu atau cucumu";
    }

    return 0;
}
