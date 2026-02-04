#include <iostream>

void login(std::string username);
void prodi(std::string jurusan, int angkatan);

int main()
{
    std::string username;
    std::string jurusan;
    int angkatan;

    login(username);

    prodi(jurusan, angkatan);

    std::cout << " " << '\n';
    std::cout << "========================================================\n";
    std::cout << " " << '\n';
    std::cout << " ==================== Terima kasih ====================\n";
    std::cout << " " << '\n';
    std::cout << "========================================================\n";

    return 0;
}

void login(std::string username)
{
    std::cout << "Masukkan username anda: ";
    std::cin >> username;

    std::cout << '\n';
    std::cout << username << " Selamat Datang " << "di Fakultas Ilmu Komputer\n\n";
}

void prodi(std::string jurusan, int angkatan)
{
    std::cout << "Silahkan memilih Program Studi yang ada Di Fakultas Ilmu Komputer\n";
    std::cout << "1. Sistem Informasi\n";
    std::cout << "2. Teknologi Informasi\n";
    std::cout << "3. Informatika\n";
    std::cout << "Masukkan Prodi yang anda pilih: ";
    std::cin >> jurusan;
}
