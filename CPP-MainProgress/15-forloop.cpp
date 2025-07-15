#include <iostream>

int main(){
    // for loop adalah alternatif looping dari while dan do-while
    // for loop dapat diatur hingga berapa kali looping dilakukan

    for(int i = 1; i <= 10; i++){       // looping dibatasi hingga 10 kali
        std::cout << "Looping telah dilakukan sebanyak " << i << "\n";
    }

    return 0;
}