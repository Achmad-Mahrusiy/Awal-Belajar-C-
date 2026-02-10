#include <iostream>

void login(std::string username);
void prodi(int jurusan, int angkatan);

int main()
{
    std::string username;
    int jurusan;
    int angkatan;

    std::cout << "\n\n========================================================\n";
    std::cout << "==================== Selamat Datang ====================\n";
    std::cout << "========================================================\n\n";

    login(username);

    std::cout << '\n';

    prodi(jurusan, angkatan);

    std::cout << " " << '\n';
    std::cout << "========================================================\n";
    std::cout << "===================== Terima kasih =====================\n";
    std::cout << "========================================================\n";

    return 0;
}

void login(std::string username)
{
    std::cout << "Masukkan username anda: ";
    std::cin >> username;

    std::cout << '\n';
    std::cout << "Selamat Datang " << username << " di Fakultas Ilmu Komputer\n";
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
            std::cout << "\nanda mahasiswa angkatan berapa: ";
            std::cin >> angkatan;
            if (angkatan == 2025)
            {
                std::cout << "Selamat datang mahasiswa baru " << angkatan << '\n';
                std::cout << "Berikut Mata Kuliah yang keluar di semester 2 di Sistem Informasi: \n";
                std::cout << "1. Pemograman BErorientasi Objek.\n";
                std::cout << "2. Pengantar Rekayasa Perangkat Lunak.\n";
                std::cout << "3. Jaringan Komputer.\n";
                std::cout << "4. Matematika Diskrit.\n";
                std::cout << "5. Arsitektur Komputer.\n";
                std::cout << "6. Sistem Basis Data.\n";
                std::cout << "7. Manajemen Keamanan Sistem Informasi.\n";
                break;
            }
            else if (angkatan == 2024)
            {
                std::cout << "\nSelamat datang di Sistem Informasi angkatan " << angkatan << '\n';
                std::cout << "\nBerikut Mata Kuliah Wajib yang keluar di semester 4 di Sistem Informasi: \n";
                std::cout << "1. Pendidikan Kewarganegaraan.\n";
                std::cout << "2. PPL untuk Agroindustri Modern.\n";
                std::cout << "3. Data Mining.\n";
                std::cout << "4. Sistem Enterprise.\n";
                std::cout << "5. Profesional Issue.\n";
                std::cout << "6. Pemrograman Berbasis Web.\n";
                std::cout << "7. Manajemen Proyek TI.\n";
                std::cout << "8. Tata Kelola Teknlogi Informasi.\n";

                std::cout << "\nBerikut Mata Kuliah Pilihan yang boleh diambil untuk semester 3 ke atas: \n";
                std::cout << "1. Manajemen Agroindustri Modern.\n";
                std::cout << "2. Supply Chain Management.\n";
                std::cout << "3. Pengukuran dan Implementasi.\n";
                std::cout << "4. Audit TI.\n";
                std::cout << "5. Manajemen Layanan TI.\n";
                std::cout << "6. E-Goverment.\n";
                std::cout << "7. Manajemen Resiko TI.\n";
                std::cout << "8. Requrement Engineering.\n";
                std::cout << "9. Enterprise Architecture.\n";
                std::cout << "10. Spatial Basis Data.\n";
                std::cout << "11. Sistem Penunjang Pengambilan Keputusan.\n";
                std::cout << "12. Penginderaan Jauh.\n";
                std::cout << "13. E-Business.\n";
                std::cout << "14. Data Science.\n";
                std::cout << "15. Analisis dan Pemodelan Spasial.\n";
                std::cout << "16. Pengantar Sistem Informasi Geografi.\n";
                std::cout << "17. UI/UX Design.\n";
                break;
            }
            else if (angkatan == 2023 || angkatan == 2022)
            {
                std::cout << "\nSelamat datang Mahasiswa angkatan " << angkatan << " di Sistem Informasi.\n";
                std::cout << "\nBerikut Mata Kuliah Wajib dan Pilihan Untuk Semester 5 keatas: \n";

                std::cout << "\nMata Kuliah Wajib: \n";
                std::cout << "1. Praktek Kerja Lapangan.\n";
                std::cout << "2. KKN (Kuliah Kerja Nyata).\n";
                std::cout << "3. Skripsi.\n";

                std::cout << "\nMata Kuliah Pilihan: \n";
                std::cout << "1. Manajemen Agroindustri Modern.\n";
                std::cout << "2. Supply Chain Management.\n";
                std::cout << "3. Pengukuran dan Implementasi.\n";
                std::cout << "4. Audit TI.\n";
                std::cout << "5. Manajemen Layanan TI.\n";
                std::cout << "6. E-Goverment.\n";
                std::cout << "7. Manajemen Resiko TI.\n";
                std::cout << "8. Requrement Engineering.\n";
                std::cout << "9. Enterprise Architecture.\n";
                std::cout << "10. Spatial Basis Data.\n";
                std::cout << "11. Sistem Penunjang Pengambilan Keputusan.\n";
                std::cout << "12. Penginderaan Jauh.\n";
                std::cout << "13. E-Business.\n";
                std::cout << "14. Data Science.\n";
                std::cout << "15. Analisis dan Pemodelan Spasial.\n";
                std::cout << "16. Pengantar Sistem Informasi Geografi.\n";
                std::cout << "17. UI/UX Design.\n";
            }
            else if (angkatan == 2021)
            {
                std::cout << "\nJadi Mau Kapan Lulusnya bro??\n";
                std::cout << "Atau Sudah lulus sekarang?\n";
            }
            else
            {
                std::cout << "\nSelamat anda telah menyelesaikan tugas sebagai mahasiswa\n";
            }
            break;
        case 2:
            std::cout << "anda mahasiswa angkatan berapa: ";
            std::cin >> angkatan;
            if (angkatan == 2025)
            {
                std::cout << "\nSelamat datang mahasiswa baru " << angkatan << '\n';
                std::cout << "\nBerikut Mata Kuliah yang keluar di semester 2 di Teknologi Informasi: \n";
                std::cout << "1. Pemograman SQL.\n";
                std::cout << "2. MAtematika Diskrit.\n";
                std::cout << "3. Sistem Operasi.\n";
                std::cout << "4. Statistika Terapan.\n";
                std::cout << "5. Routing and Switching.\n";
                std::cout << "6. Teori Graf.\n";
                std::cout << "7. Pemograman Beorientasi Objek.\n";
                std::cout << "8. Pendidikan Kewarganegaraan.\n";
                break;
            }
            else if (angkatan == 2024)
            {
                std::cout << "\nSelamat datang di Teknologi Informasi angkatan " << angkatan << '\n';
                std::cout << "\nBerikut Mata Kuliah yang keluar di semester 4 di Teknologi Informasi: \n";
                std::cout << "1. PPL untuk Agroindustri Moddern.\n";
                std::cout << "2. Analisis dan Desain Perangkat Lunak.\n";
                std::cout << "3. Routing and Switching.\n";
                std::cout << "4. Pemograman Antarmuka Aplikasi.\n";
                std::cout << "5. Desain dan Manajemen Jaringan.\n";
                std::cout << "6. Keamanan Sistem.\n";
                std::cout << "7. Pemograman Berbasis Mobile.\n";

                std::cout << "\nBerikut Mata Kuliah Pilihan yang boleh diambil untuk semester 3 ke atas: \n";
                std::cout << "1. Digital Forensik.\n";
                std::cout << "2. Basis Data Terdistribusi.\n";
                std::cout << "3. Pola-Pola Perancangan.\n";
                std::cout << "4. Rekayasa Kebutuhan.\n";
                std::cout << "5. Manajemen Kualitas Perangkat Lunak.\n";
                std::cout << "6. Model Bisnis Digital.\n";
                std::cout << "7. Embeded System Programming.\n";
                std::cout << "8. IOT dalam Agroindustri.\n";
                std::cout << "9. System Device.\n";
                std::cout << "10. Strategi Pengembangan Media Pembelajaran.\n";
                std::cout << "11. Augment Reality.\n";
                std::cout << "12. 3D Modeling dan Animasi.\n";
                std::cout << "13. Game Engine Design dan Development.\n";
                std::cout << "14. Intelligent Game Theory.\n";
                std::cout << "15. Data Science untuk Teknologi Informasi.\n";
                std::cout << "16. Visualisasi dan Interpretasi Data.\n";
                std::cout << "17. Data Mining.\n";
                std::cout << "18. Cloud Computing.\n";
                std::cout << "19. Text Mining.\n";
                std::cout << "20. Jaringan Nirkabel.\n";
                std::cout << "21. Pengelolaan Citra dan Visi Komputer.\n";
                std::cout << "22. Cyber Security.\n";
                std::cout << "23. SIstem Informasi Geografis.\n";
                break;
            }
            else if (angkatan == 2023 || angkatan == 2022)
            {
                std::cout << "\nSelamat datang Mahasiswa angkatan " << angkatan << " di Teknologi Informasi.\n";
                std::cout << "\nBerikut Mata Kuliah Wajib dan Pilihan Untuk Semester 5 keatas: \n";

                std::cout << "\nMata Kuliah Wajib: \n";
                std::cout << "1. Praktek Kerja Lapangan.\n";
                std::cout << "2. KKN (Kuliah Kerja Nyata).\n";
                std::cout << "3. Skripsi.\n";

                std::cout << "Mata Kuliah Pilihan: \n";
                std::cout << "1. Digital Forensik.\n";
                std::cout << "2. Basis Data Terdistribusi.\n";
                std::cout << "3. Pola-Pola Perancangan.\n";
                std::cout << "4. Rekayasa Kebutuhan.\n";
                std::cout << "5. Manajemen Kualitas Perangkat Lunak.\n";
                std::cout << "6. Model Bisnis Digital.\n";
                std::cout << "7. Embeded System Programming.\n";
                std::cout << "8. IOT dalam Agroindustri.\n";
                std::cout << "9. System Device.\n";
                std::cout << "10. Strategi Pengembangan Media Pembelajaran.\n";
                std::cout << "11. Augment Reality.\n";
                std::cout << "12. 3D Modeling dan Animasi.\n";
                std::cout << "13. Game Engine Design dan Development.\n";
                std::cout << "14. Intelligent Game Theory.\n";
                std::cout << "15. Data Science untuk Teknologi Informasi.\n";
                std::cout << "16. Visualisasi dan Interpretasi Data.\n";
                std::cout << "17. Data Mining.\n";
                std::cout << "18. Cloud Computing.\n";
                std::cout << "19. Text Mining.\n";
                std::cout << "20. Jaringan Nirkabel.\n";
                std::cout << "21. Pengelolaan Citra dan Visi Komputer.\n";
                std::cout << "22. Cyber Security.\n";
                std::cout << "23. SIstem Informasi Geografis.\n";                
            }
            else if (angkatan == 2021)
            {
                std::cout << "\nJadi Mau Kapan Lulusnya bro??\n";
                std::cout << "Atau Sudah lulus sekarang?\n";
            }
            else
            {
                std::cout << "\nSelamat anda telah menyelesaikan tugas sebagai mahasiswa\n";
            }
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
