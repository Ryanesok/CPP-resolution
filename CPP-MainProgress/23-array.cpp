#include <iostream>

int main(){
    // array adalah variabel yang dapat memiliki banyak nilai.
    // ditandai dengan tanda [] didepan variable, seperti nama[], angka[], warna[] dsb.
    
    int num[] = {1, 2, 3, 4, 5};
    std::cout << num;               // jika memanggil array tanpa [], konsol akan mengembalikan letak memori dari array
    std::cout << std::endl;
    std::cout << num[1];            // memanggil array di indeks 1.
                                    // indeks dalam array selalu dimulai dari 0.
    std::string nama[5] = {"Budi", "Beni", "Yayuk"};        // ini berarti array nama[5] mempunyai anggota 5, tetapi di dalam
    std::cout << std::endl;                                 // array boleh ditulis kurang dari 5.
    
    std::cout << nama;
    std::cout << std::endl;
    std::cout << nama[0];

    nama[3] = "Dodi";               // ini akan menyebabkan segmentation fault, karena berusaha menambah anggota tanpa izin.
    nama[4] = "Ilyas";              // untuk mengatasinya, dapat ditentukan seberapa besar array yang akan dibuat.
    std::cout << std::endl;
    std::cout << nama[3];
    std::cout << nama[4];

    // jika ingin assign value array di akhir, atau setelah deklarasi array, pastikan array sudah memiliki ukuran yang fixed
    // jika tidak, maka assign value di saat array di deklarasikan.
}