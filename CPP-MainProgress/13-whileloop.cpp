#include <iostream>
#include <string>

int main(){
    // while loop adalah pengulangan yang akan terus terjadi selama kondisi bernilai benar.
    // contohnya sebagai berikut:
    
    // while(1 == 1){                                               // kondisi ini akan membuat infinite loop
    //     std::cout << "Tolong aku terjebak di loop infinity!\n";
    // }

    std::string name;

    while(name.empty()){                    // selama string name masih kosong, loop akan terjadi
        std::cout << "Masukkan nama: ";         
        std::getline(std::cin, name);
    }

    std::cout << "Halo, " << name;
    return 0;
}