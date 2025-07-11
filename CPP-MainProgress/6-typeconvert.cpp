#include <iostream>

int main(){
    // konversi tipe data dapat dilakukan dalam 2 cara:
    // implisit = otomatis dari sistem (language)
    // explisit = di definisikan secara manual (tertulis)
    
    int x = 3.14;
    std::cout << x;

    // x menyimpan nilai double, tetapi didefinisikan sebagai integer.
    // maka ketika x diprint ke console akan menampilkan nilai 3 saja.
    // contoh lain:
    
    char y = 100; // (char) 100 = d
    std::cout << y;
    std::cout << (int) 'y'; // (int) 'y' = 121

    // penerapannya adalah sebagai berikut:
    // anggaplah seorang menjawab pertanyaan benar 8 dari 10
    // dan nilainya ditampilkan dalam bentuk persentase.
    // maka
    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100;

    std::cout << "\nScore : " << score << "%";
    return 0;
}