#include <iostream>

int main(){
    // if statement adalah syntax kondisional
    // jika kondisi bernilai benar, maka lakukan
    // jika tidak, maka jangan lakukan.
    int age;

    std::cout << "Masukkan umur: ";
    std::cin >> age;

    if(age >= 18){                              // inisialisasi if
        std::cout << "selamat datang!";         // lakukan jika kondisi benar
    }else if(age < 0){                          // jika salah, pindah ke kondisi selanjutnya (jika ada)
        std::cout << "Kamu belum lahir!";
    }
    else{                                       // lakukan else jika kondisi if diatasnya tidak bernilai benar.
        std::cout << "kamu tidak boleh masuk!";
    }

    return 0;
}