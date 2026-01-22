#include <iostream>
#include <string>
using namespace std;

int main()
{
    int menu_jurusan = 0, prospek_kerja = 0;
    string nama;
    string jurusanDipilih, prospekDipilih;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    // === Looping Jurusan ===
    do
    {
        cout << "\nPilihan Jurusan:\n";
        cout << "1. Sistem Informasi\n";
        cout << "2. Teknologi Informasi\n";
        cout << "3. Informatika\n";
        cout << "Pilih jurusan (1-3): ";
        cin >> menu_jurusan;

        if (menu_jurusan < 1 || menu_jurusan > 3)
        {
            cout << "❌ Jurusan tidak valid. Ulangi!\n";
        }

    } while (menu_jurusan < 1 || menu_jurusan > 3);

    switch (menu_jurusan)
    {
    case 1:
        jurusanDipilih = "Sistem Informasi";
        do
        {
            cout << "\nProspek Kerja Sistem Informasi:\n";
            cout << "1. Frontend Developer\n";
            cout << "2. Backend Developer\n";
            cout << "3. IT Auditor\n";
            cout << "Pilih prospek (1-3): ";
            cin >> prospek_kerja;

            if (prospek_kerja < 1 || prospek_kerja > 3)
            {
                cout << "❌ Prospek tidak valid. Ulangi!\n";
            }

        } while (prospek_kerja < 1 || prospek_kerja > 3);

        switch (prospek_kerja)
        {
        case 1:
            prospekDipilih = "Frontend Developer";
            break;
        case 2:
            prospekDipilih = "Backend Developer";
            break;
        case 3:
            prospekDipilih = "IT Auditor";
            break;
        }
        break;

    case 2:
        jurusanDipilih = "Teknologi Informasi";
        do
        {
            cout << "\nProspek Kerja Teknologi Informasi:\n";
            cout << "1. Network Engineer\n";
            cout << "2. System Analyst\n";
            cout << "3. IT Support\n";
            cout << "Pilih prospek (1-3): ";
            cin >> prospek_kerja;

            if (prospek_kerja < 1 || prospek_kerja > 3)
            {
                cout << "❌ Prospek tidak valid. Ulangi!\n";
            }

        } while (prospek_kerja < 1 || prospek_kerja > 3);

        switch (prospek_kerja)
        {
        case 1:
            prospekDipilih = "Network Engineer";
            break;
        case 2:
            prospekDipilih = "System Analyst";
            break;
        case 3:
            prospekDipilih = "IT Support";
            break;
        }
        break;

    case 3:
        jurusanDipilih = "Informatika";
        do
        {
            cout << "\nProspek Kerja Informatika:\n";
            cout << "1. Software Engineer\n";
            cout << "2. Data Scientist\n";
            cout << "3. Game Developer\n";
            cout << "Pilih prospek (1-3): ";
            cin >> prospek_kerja;

            if (prospek_kerja < 1 || prospek_kerja > 3)
            {
                cout << "❌ Prospek tidak valid. Ulangi!\n";
            }

        } while (prospek_kerja < 1 || prospek_kerja > 3);

        switch (prospek_kerja)
        {
        case 1:
            prospekDipilih = "Software Engineer";
            break;
        case 2:
            prospekDipilih = "Data Scientist";
            break;
        case 3:
            prospekDipilih = "Game Developer";
            break;
        }
        break;
    }

    // === Output Akhir ===
    cout << "\n"
         << nama << " memilih jurusan "
         << jurusanDipilih << " dengan prospek kerja "
         << prospekDipilih << "." << endl;

    return 0;
}
