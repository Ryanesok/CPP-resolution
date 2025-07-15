#include <iostream>

int main(){
    // do-while loop adalah ekstensi dari while loop
    // do-while loop melakukan kode yang ditulis di dalamnya terlebih dahulu
    //               baru kemudian melakukan looping jika kondisi bernilai true

    int num;

    do
    {
        std::cout << "Masukkan angka positif: ";    // lakukan kode ini minimal sekali
        std::cin >> num;
    } while (num < 0);                              // kondisi true jika memasukkan angka negatif

    std::cout << "Angka yang dimasukkan: " << num;
    return 0;
}