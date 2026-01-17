#include <iostream>

int tambah(int pertama, int kedua)
{
    return pertama + kedua;
}

int main()
{

    int hasil = tambah(22, 18);

    std::cout << hasil << std::endl;
    return 0;
}
