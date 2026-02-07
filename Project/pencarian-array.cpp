#include <iostream>

int cariArrays(int array[], int ukuran, int element);

int main()
{
    int nomor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ukuran = sizeof(nomor)/sizeof(nomor[0]);
    int index;
    int nomorku;

    std::cout << "Masukkan element untuk dicari: " << '\n';
    std::cin >> nomorku;

    index = cariArrays(nomor, ukuran, nomorku);

    if(index != -1){
        std::cout << nomorku << " berada di index " << index;
    }
    else{
        std::cout << nomorku << " tidak ada di array";
    }

    return 0;
}

int cariArrays(int array[], int ukuran, int element){

    for(int i = 0; i < ukuran; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
