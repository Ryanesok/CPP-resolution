#include <iostream>
#include <cmath>

int main(){
    // project : Menghitung sisi miring segitiga menggunakan rumus phytagoras
    // C^2 = /a^2 + b^2 
    
    double a, b, c;
    int pilihan;

    std::cout << "=== Phytagoras program ===\n";
    std::cout << "Menu:\n";
    std::cout << "1.) Cari sisi miring\n";
    std::cout << "2.) Cari sisi tegak\n";
    std::cout << "3.) Cari sisi alas\n";
    std::cout << "Masukkan pilihan: ";
    std::cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        std::cout << "Masukkan sisi tegak: ";
        std::cin >> a;

        std::cout << "Masukkan sisi alas: ";
        std::cin >> b;

        c = sqrt(pow(a,2) + pow(b,2));
        std::cout << "Sisi miring dari segitiga adalah: " << c;
        break;
    case 2:
        std::cout << "Masukkan sisi miring: ";
        std::cin >> c;

        std::cout << "Masukkan sisi alas: ";
        std::cin >> b;

        a = sqrt(pow(c,2) - pow(b,2));
        std::cout << "Sisi miring dari segitiga adalah: " << a;
        break;
    case 3:
        std::cout << "Masukkan sisi miring: ";
        std::cin >> c;

        std::cout << "Masukkan sisi tegak: ";
        std::cin >> a;

        b = sqrt(pow(c,2) - pow(a,2));
        std::cout << "Sisi miring dari segitiga adalah: " << b;
        break;
    default:
        std::cout << "Pilihan tidak valid!";
        break;
    }

    return 0;
}