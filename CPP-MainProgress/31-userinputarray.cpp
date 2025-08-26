#include <iostream>

int main(){
    // array secara umum adalah static, karena harus didefinisikan terlebih dahulu ukuran dan isi dari array.
    // meskipun anggota dari array dapat difenisikan terakhir, ukuran dari array tetap harus ditentukan di awal.

    std::string foods[5];
    int size = sizeof(foods)/sizeof(std::string);
    std::string temp;

    for (int i = 0; i < size; i++){
        std::cout << "\nMasukkan anggota array ke - " << i + 1 << " : (atau ketik 'q' untuk mengakhiri) ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }else{
            foods[i] = temp;
        }
    }

    std::cout << "\nAnggota array adalah: \n";
    for(int i = 0; !foods[i].empty(); i++){             // kondisi !foods[i].empty() untuk menjaga looping 
        std::cout << foods[i] << "\n";                  // hanya menampilkan anggota yang ada saja
    }
    return 0;
}