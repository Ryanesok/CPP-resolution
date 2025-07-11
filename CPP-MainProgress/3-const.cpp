#include <iostream>

int main(){
    // const adalah tipe data khusus yang tidak dapat dirubah (read-only)
    // contoh
    const double pi = 3.14159;
    const int a = 225;
    double radius = 11;
    double luas = 2 * radius * pi;
    // pi = 122.089     ; ini akan menghasilkan error jika berusaha diubah.

    std::cout << "Luas: " << luas << "cm2";
    return 0;
}