#include <iostream>

void sayHello(){            // fungsi void, artinya tidak mengembalikan nilai apapun.
    std::cout << "Hello!";
}

int tambah(int a, int b){   // fungsi non-void, harus mengembalikan suatu nilai. 
    return a + b;
}

int kurang(int a, int b);   // fungsi ini didefinisikan setelah main function.

int main(){
    // function adalah blok kode yang dapat dipakai berulang kali.
    // sesuai namanya, function menjalankan fungsi tertentu.

    sayHello();                 // selalu gunakan tanda kurung () ketika memanggil sebuah fungsi.
    int a = 10;
    int b = 5;
    std::cout << tambah(a, b);  // fungsi tambah memiliki parameter yang harus dipenuhi, yaitu int a dan int b.
    std::cout << kurang(a, b);  
    return 0;
}

int kurang(int a, int b){       // fungsi dapat didefinisikan belakangan untuk menambah keterbacaan kode.
    return a - b;
}
