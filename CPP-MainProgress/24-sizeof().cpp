#include <iostream>

int main(){
    // sizeof() adalah fungsi yang menunjukkan ukuran dari tipe data dalam bytes
    int a = 5;                                  // int memiliki setidaknya 4 byte dalam satu tipe data
    std::string nama1 = "andrian";              // string memiliki setidaknya 32 byte 
    std::string nama2 = "agus";           
    char huruf[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};  // array memiliki ukuran yang bervariasi, tergantung tipe datanya
    bool bagus = true;                          // karena boolean hanya bernilai 1 atau 0, ukuran boolean adalah 1 byte
    float pi = 3.14;                            // float dengan presisi tunggal memiliki 4 byte
    double phi = 3.1419;                        // double dengan presisi ganda memiliki 8 byte


    std::cout << sizeof(a) << " Bytes\n";
    std::cout << sizeof(nama1) << " Bytes\n";
    std::cout << sizeof(nama2) << " Bytes\n";
    std::cout << sizeof(bagus) << " Bytes\n";
    std::cout << sizeof(pi) << " Bytes\n";
    std::cout << sizeof(phi) << " Bytes\n";
    std::cout << sizeof(huruf)/sizeof(char) << " elements\n";       // kegunaan sizeof untuk menentukan banyak elemen suatu array.
    return 0;   
}