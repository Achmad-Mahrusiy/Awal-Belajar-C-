#include <iostream>

void login(std::string username);
void prodi(int jurusan, int angkatan);

int main()
{
    std::string username;
    int jurusan;
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

void prodi(int jurusan, int angkatan)
{
    std::cout << "Silahkan memilih Program Studi yang ada Di Fakultas Ilmu Komputer\n";
    std::cout << "1. Sistem Informasi\n";
    std::cout << "2. Teknologi Informasi\n";
    std::cout << "3. Informatika\n";
    std::cout << "Masukkan Prodi yang anda pilih: ";
    std::cin >> jurusan;

    do
    {
        switch (jurusan)
        {
        case 1:
            std::cout << "Selamat datang di Sistem Informasi\n";
            break;
        case 2:
            std::cout << "Selamat datang di Teknologi Informasi\n";
            break;
        case 3:
            std::cout << "Selamat datang di Informatika\n";
            break;
        default:
            std::cout << "Masukkan Prodi yang sudah tertera!\n";
            break;
        }
    } while (jurusan < 0 && jurusan > 3);
}
