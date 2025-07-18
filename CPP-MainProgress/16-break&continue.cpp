#include <iostream>

int main(){
    // break    = keluar dari loop
    // continue = lompati iterasi saat ini.
    
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;           // iterasi dilompati
        }
        if(i == 9){
            break;              // iterasi selesai
        }
        std::cout << "\nIterasi: " << i;
    }
    return 0;
}