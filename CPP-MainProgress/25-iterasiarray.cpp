#include <iostream>

int main(){
    // iterasi dalam array adalah pemanggilan setiap elemen array secara berurutan.
    
    std::string nama[] = {"Andi", "Budi", "Caca", "Didi"};
    int elemen = sizeof(nama)/sizeof(std::string);          // kegunaan sizeof untuk mengetahui jumlah elemen 
    
    for(int i = 0; i < elemen; i++){
        std::cout << nama[i] << " telah dipanggil\n";       // karena berurutan mulai dari 0, maka i dapat digunakan sebagai indeks yang akan dipanggil
    }
    return 0;
}