#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 4 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "Hidup Jokowi";
        break;
    case 2:
        std::cout << "YNTKTS";
        break;
    case 3:
        std::cout << "SAWIT SAWIT";
        break;
    case 4:
        std::cout << "19 juta lapangan pekerjaan";
        break;
    }
    return 0;
}
