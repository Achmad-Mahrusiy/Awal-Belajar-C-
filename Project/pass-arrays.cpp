#include <iostream>

double Total(double harga[], int ukuran);

int main()
{
    double harga[] = {20.0, 25.0, 30.0, 35.0, 40.0};
    int ukuran = sizeof(harga) / sizeof(harga[0]);
    double total = Total(harga, ukuran);

    std::cout << "$" << total;

    return 0;
}

double Total(double harga[], int ukuran)
{
    double total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += harga[i];
    }

    return total;
}
