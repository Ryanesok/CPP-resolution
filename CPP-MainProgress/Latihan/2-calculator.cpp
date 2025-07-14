#include <iostream>
#include <cmath>

int main(){
    // project : membuat kalkulator sederhana menggunakan switch
    int pilihan;
    double a, b;

    do
    {
        std::cout << "\n== Calculator program ==";
        std::cout << "\n1. tambah";
        std::cout << "\n2. kurang";
        std::cout << "\n3. kali";
        std::cout << "\n4. bagi";
        std::cout << "\n5. modulus";
        std::cout << "\n6. keluar";
        std::cout << "\npilih 1-6 : ";
        std::cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            std::cout << "Masukkan angka pertama: ";
            std::cin >> a;
            std::cout << "Masukkan angka kedua: ";
            std::cin >> b;
            std::cout << "\nHasil: " << a + b;
            break;
        case 2:
            std::cout << "Masukkan angka pertama: ";
            std::cin >> a;
            std::cout << "Masukkan angka kedua: ";
            std::cin >> b;
            std::cout << "\nHasil: " << a - b;
            break;
        case 3:
            std::cout << "Masukkan angka pertama: ";
            std::cin >> a;
            std::cout << "Masukkan angka kedua: ";
            std::cin >> b;
            std::cout << "\nHasil: " << a * b;
            break;
        case 4:
            std::cout << "Masukkan angka pertama: ";
            std::cin >> a;
            std::cout << "Masukkan angka kedua: ";
            std::cin >> b;
            std::cout << "\nHasil: " << a / b;
            break;
        case 5:
            std::cout << "Masukkan angka pertama: ";
            std::cin >> a;
            std::cout << "Masukkan angka kedua: ";
            std::cin >> b;
            std::cout << "\nHasil: " << (int) a % (int) b;
            break;
        case 6:
            std::cout << "Terima kasih sudah mencoba!";
            break;
        default:
            std::cout << "Silahkan pilih 1 - 6!";
            break;
        }

    } while (pilihan != 6);
    
}