#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "Beginilah hidup bro!";
        break;
    case 2:
        std::cout << "When yah";
        break;
    case 3:
        std::cout << "SAWIT SAWIT SAWIT!!!";
        break;
    case 4:
        std::cout << "19 juta lapangan pekerjaan";
        break;
    case 5:
        std::cout << "Beginilah Hidup";
        break;
    }
    return 0;
}
