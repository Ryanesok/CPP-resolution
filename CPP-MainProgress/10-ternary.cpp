#include <iostream>

int main(){
    // ternary operator = ?: adalah pengganti if/else statement
    // kondisi ? ekspresi 1 : ekspresi 2
    int grade = 75;
    bool lapar = true;
    
    // grade >= 65 ? std::cout << "Kamu lulus!" : std::cout << "Kamu gagal!";               // cara 1
    std::cout << (grade >= 65 ? "Kamu lulus!" : "Kamu gagal!");                             // cara 2
    lapar == false ? std::cout << "Tidak, aku kenyang" : std::cout << "Ya, aku lapar";      // kondisi true tidak perlu ditulis, 
                                                                                            // berbeda dengan false
    return 0;
}