#include <iostream>
#include <ctime>

int main(){
    // random number dalam c++ adalah angka yang diambil secara acak oleh sistem.
    // dapat dimanipulasi secara manual menggunakan modulus.
    // contoh nyatanya adalah pada dadu, di mana hasilnya adalah angka 1-6
    
    srand(time(NULL));                  // seed untuk RNG (random number generator), selalu tulis di awal kode. 
                                        // time(NULL) = time(0). ketik salah satu

    // int num = (rand() % 6) + 1;         // +1 dimaksudkan untuk menambah jangkauan hasil, awalnya adalah 0-5
    //                                     // ketika ditambah 1, maka jangkauannya adalah 1-6
    // std::cout << num;

    int lotTicket = rand() % 5 + 1;
    switch (lotTicket)                              // dapat digunakan sebagai random event generator
    {
    case 1:
        std::cout << "Kamu menang sebuah emas!";
        break;
    case 2:
        std::cout << "Kamu menang sebuah sepeda!";
        break;
    case 3:
        std::cout << "Kamu menang sebuah patung!";
        break;
    case 4:
        std::cout << "Kamu menang sebuah gelas!";
        break;
    case 5:
        std::cout << "Kamu menang sejumlah uang!";
        break;
    }
    return 0;
}