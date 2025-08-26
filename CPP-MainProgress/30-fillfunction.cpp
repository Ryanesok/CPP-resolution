#include <iostream>

int main(){
    // fill function berfungsi untuk mengisi array berjumlah banyak,
    // seperti array dengan isi 50, 75, 100, 200, 500 dsb.
    // sintaksnya adalah fill(awal, akhir, nilai)

    const int SIZE = 99;                 // sesuaikan ukuran dengan kebutuhan.

    std::string makanan[SIZE];  

    fill(makanan, makanan + (SIZE/3), "Song ye");                   
    fill(makanan + (SIZE/3), makanan + (SIZE/3) * 2, "Hamburger");
    fill(makanan + (SIZE/3) * 2, makanan + SIZE, "Mambo");

    for(std::string cemilan : makanan){
        std::cout << cemilan << "\n";
    }
    return 0;
}