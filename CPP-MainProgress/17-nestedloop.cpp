#include <iostream>

int main(){
    // nested loop adalah loop di dalam loop
    // dapat dilakukan di dalam semua loop, tetapi lebih sering pada for loop
    
    //  contoh 1
    // for(int i = 1; i <= 3; i++){
    //     for(int j = 1; j <= 10; j++){
    //         std::cout << j << " ";
    //     }
    //     std::cout << "\n";
    // }

    // contoh 2
    int rows, columns;                  // user-defined banyak kolom dan baris
    char symbol;                        // symbol yang akan dipakai sebagai tampilan

    std::cout << "Berapa banyak kolom?";
    std::cin >> columns;

    std::cout << "\nBerapa banyak baris?";
    std::cin >> rows;
    
    std::cout << "\nApa simbol yang ingin ditampilkan?";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol << " ";
        }
        std::cout << "\n";
    }
    return 0;
}