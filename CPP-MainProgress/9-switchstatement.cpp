#include <iostream>

int main(){
    // switch statement adalah alternatif dari if-statement
    // switch berguna jika suatu masalah punya banyak kondisi.
    
    int month;                              // contoh kasus: bulan dalam setahun.
    std::cout << "Masukkan bulan: ";
    std::cin >> month;

    switch (month)
    {
    case 1:                             // case *kondisi* sama seperti "if" statement
        std::cout << "Januari";
        break;
    case 2:
        std::cout << "Februari";
        break;
    case 3:
        std::cout << "Maret";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "Mei";
        break;
    case 6:
        std::cout << "Juni";
        break;
    case 7:
        std::cout << "Juli";
        break;
    case 8:
        std::cout << "Agustus";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "Oktober";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "Desember";
        break;
    default:                                // Default case sama seperti "else" statement
        std::cout << "Bulan hanya ada 12!";
        break;
    }

    return 0;
}