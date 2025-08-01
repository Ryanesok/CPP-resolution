#include <iostream>

int main(){
    // for each loop memudahkan proses iterasi dalam data set, alternatif dari for loop
    // for each loop memungkinkan setiap data yang dipanggil sesuai dengan ketentuan program.
    // for loop memang kelihatannya sama saja dengan for each loop, tapi disini perbedaannya:

    std::string nama[] = {"Andi", "Budi", "Caca", "Didi"};      
    int elemen = sizeof(nama)/sizeof(std::string);           
    
    for(int i = 0; i < elemen; i++){                        // data yang dipanggil oleh for loop adalah data sesuai indeks
        std::cout << nama[i] << " telah dipanggil\n";       // karena spesifik, data jadi mudah dimanipulasi
    }

    for(std::string name : nama){                           // data yang dipanggil dalam for each adalah data yang ada di dalam array
        std::cout << name << "\n";                          // karena terlihat simpel, for each loop biasanya digunakan ketika hanya ingin 
    }                                                       // menampilkan isi dari array
}