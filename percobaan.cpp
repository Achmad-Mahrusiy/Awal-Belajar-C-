#include <iostream>
#include <ctime>

int main()
{

    std::string jurusan;
    std::string nama;

    std::cout << " " << '\n';
    std::cout << "========================================================\n";
    std::cout << " " << '\n';
    std::cout << "   ==================== FASILKOM ====================\n";
    std::cout << " " << '\n';
    std::cout << "========================================================\n";

    std::cout << "Pengisian nama maksimal 20 huruf.\n";

    do
    {
        std::cout << "Masukkan nama lengkap anda: ";
        std::getline(std::cin, nama);
        if (nama.empty())
        {
            std::cout << "Nama tidak boleh kosong!\n";
        }
        else if (nama.length() > 20)
        {
            std::cout << "Nama tidak boleh melebihi 20 huruf!\n";
        }
        else
        {
            std::cout << "Selamat datang " << nama << '\n';
            break;
        }
    } while (true);

    std::cout << "Jurusan: \n";
    std::cout << "1. Sistem Informasi\n";
    std::cout << "2. Teknologi Informasi\n";
    std::cout << "3. Informatika\n"; 

    do
    {
        std::cout << "Masukkan Jurusan anda: ";
        std::getline(std::cin, jurusan);

        if (jurusan.empty())
        {
            std::cout << "Masukkan Jurusan yang sudah tertera!\n";
        }

        else if (jurusan == "SI" || jurusan == "Sistem Informasi" || jurusan == "sistem informasi" || jurusan == "SISTEM INFORMASI" || jurusan == "si")
        {
            std::cout << "Hidup Jokowi\n";
            break;
        }

        else if (jurusan == "TI" || jurusan == "Teknologi Informasi" || jurusan == "TEKNOLOGI INFORMASI" || jurusan == "tekonologi informasi" || jurusan == "ti")
        {
            std::cout << "Hidup Prabowo\n";
            break;
        }

        else if (jurusan == "IF" || jurusan == "Informatika" || jurusan == "INFORMATIKA" || jurusan == "informatika" || jurusan == "if")
        {
            std::cout << "Insya allah akan dibuka 19 juta lapangan pekerjaan\n";
            break;
        }

        else
        {
            std::cout << "Masukkan jurusan anda!!";
            break;
        }
    } while (true); 
