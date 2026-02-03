#include <iostream>

int main() {
    int tinggi;
    std::cout << "Masukkan tinggi piramida: ";
    std::cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "l";
        }

        std::cout << std::endl;
    }

    return 0;
}
