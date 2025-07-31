#include <iostream>
#include <string>

void hello(){
    std::cout << "Hello!";
}

void hello(std::string nama){
    std::cout << "Hello " << nama;
}

int main(){
    // overloaded function adalah function dengan nama yang sama, namun dimaksudkan berbeda.
    // seperti fungsi hello() dengan hello(string nama), di mana hello() tidak memerlukan argumen.
    // sedangkan hello(string nama) membutuhkan argumen
    
    std::string nama;
    std::cout << "Masukkan nama: ";
    std::cin >> nama;

    hello();            // jika tanpa parameter, akan memanggil fungsi hello() yang pertama
    hello(nama);        // memanggil fungsi hello() kedua
    return 0;
}