#include <iostream>

int main(){
    // logical operator digunakan di dalam kondisi gabungan
    // && digunakan seperti AND (kondisi keduanya harus benar)
    // || digunakan seperti OR (salah satu harus benar)
    // ! digunakan seperti NOT (negasi dari kondisi asal)

    int temp;
    std::cout << "Masukkan temperatur: ";
    std::cin >> temp;

    if(temp >= 50 && temp < 60){
        std::cout << "Panas";
    }else if(temp >= 10 && temp < 50){
        std:: cout << "Normal";
    }else{
        std::cout << "Dingin";
    }

    return 0;
}