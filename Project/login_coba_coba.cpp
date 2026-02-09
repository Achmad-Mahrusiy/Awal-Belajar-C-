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
    std::cout << "Selamat Datang " << username << " di Fakultas Ilmu Komputer\n\n";
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
            std::cout << "anda mahasiswa angkatan berapa: ";
            std::cin >> angkatan;
            if (angkatan == 2025)
            {
                std::cout << "Selamat datang mahasiswa baru " << angkatan << '\n';
                std::cout << "Berikut Materi Materi yang keluar di semester 2 di Sistem Informasi: \n";
                std::cout << "1. \n";
                std::cout << "2. \n";
                std::cout << "3. \n";
                std::cout << "4. \n";
                std::cout << "5. \n";
                std::cout << "6. \n";
                std::cout << "7. \n";
                std::cout << "8. \n";
                break;
            }
            else if (angkatan == 2024)
            {
                std::cout << "Selamat datang di Sistem Informasi angkatan " << angkatan << '\n';
                std::cout << "Berikut Materi Materi yang keluar di semester 4 di Sistem Informasi: \n";
                std::cout << "1. \n";
                std::cout << "2. \n";
                std::cout << "3. \n";
                std::cout << "4. \n";
                std::cout << "5. \n";
                std::cout << "6. \n";
                std::cout << "7. \n";
                std::cout << "8. \n";
                break;
            }
            else if (angkatan < 2024)
            {
                std::cout << "Welcome back mahasiswa old";
            }
            else
            {
                std::cout << "Mohon masukkan tahun angkatan yang belum lulus";
            }
            break;
        case 2:
            if (angkatan == 2025)
            {
                std::cout << "Selamat datang mahasiswa baru " << angkatan << '\n';
                break;
            }
            else if (angkatan == 2024)
            {
                std::cout << "Selamat datang di Teknologi Informasi angkatan " << angkatan << '\n';
                break;
            }
            else if (angkatan < 2024)
            {
                std::cout << "Welcome back mahasiswa old";
            }
            else
            {
                std::cout << "Mohon masukkan tahun angkatan yang belum lulus";
            }
            break;
            break;
        case 3:
            if (angkatan == 2025)
            {
                std::cout << "Selamat datang mahasiswa baru " << angkatan << '\n';
                break;
            }
            else if (angkatan == 2024)
            {
                std::cout << "Selamat datang di Informatika angkatan " << angkatan << '\n';
                break;
            }
            else if (angkatan < 2024)
            {
                std::cout << "Welcome back mahasiswa old";
            }
            else
            {
                std::cout << "Mohon masukkan tahun angkatan yang belum lulus";
            }
            break;
        default:
            std::cout << "Masukkan Prodi yang sudah tertera!\n";
            break;
        }
    } while (jurusan < 0 && jurusan > 3);
}
