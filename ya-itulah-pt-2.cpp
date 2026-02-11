#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "Beginilah hidup bro!\n";
        break;
    case 2:
        std::cout << "When yah\n";
        break;
    case 3:
        std::cout << "SAWIT SAWIT SAWIT!!!\n";
        break;
    case 4:
        std::cout << "19 juta lapangan pekerjaan\n";
        break;
    case 5:
        std::cout << "Beginilah Hidup\n";
        break;
    }
    return 0;
}


/*ya itulah wok pokoknya itu lah part 2 wok*/
//beginilah ya itu lah wok

//Gajelas Banget Pembuatnya
