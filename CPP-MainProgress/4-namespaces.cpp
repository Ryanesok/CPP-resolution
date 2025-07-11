#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    // namespaces digunakan dalam proyek besar, terutama jika harus menggunakan
    // satu variable yang sama namun dimaksudkan berbeda.
    // contoh :
    
    // int x = 1    ; 
    // int x = 2    ;
    
    // keduanya sama-sama x, namun nilainya berbeda, kita ingin pemberian
    // nama ini tidak error, maka gunakan namespace, deklarasikan diluar main()
    // hasilnya:

    //  local scope
    // int x = 0;

    //  ambil nilai local scope
    // std::cout << x;
    
    // untuk mengambil nilai x pada first ataupun second (scope luar), tambahkan namespace::x;
    // std::cout << first::x;
    // std::cout << second::x;
    
    // secara default, system akan mengambil local scope, karena untuk mengambil scope luar
    // diperlukan prefix namespace::x. namun, kita dapat meminta system untuk mengambil 
    // scope luar menggunakan perintah "using namespace"
    // sehingga:
    using namespace first;

    std::cout << x;
    return 0;
}
