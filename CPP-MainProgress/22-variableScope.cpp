#include <iostream>

int myNum = 5;          // variable global diletakkan di luar fungsi

void number(){
    std::cout << ::myNum;
}

void num(int myNum){
    // int myNum = 2;           
    std::cout << myNum;         // jika tidak dideklarasikan dalam scope/tidak mengambil parameter, maka akan error
}

int main(){
    // local variable   = variable yang berada dalam fungsi/scope lokal
    // global variable  = variable yang berada di luar fungsi/scope global

    int myNum = 1;      // ini adalah variable local karena ada di dalam fungsi main()
    num(myNum);         // fungsi num mengambil parameter myNum, sehingga tidak terjadi error.
    
    // contoh variable global
    std::cout << ::myNum;           // penambahan :: di depan variable myNum untuk mengambil variable global.
    number();                       // meskipun nama variablenya sama, scope yang diambil selalu local dahulu.
}