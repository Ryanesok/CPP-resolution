#include <iostream>

double getTotal(double harga[], int size);

int main(){
    // passing array berbeda dengan passing variable, karena passing array bermakna
    // passing-by-pointer, yaitu alamat memory dari array. (yang berarti dapat diubah dari luar fungsi).
    
    double harga[] = {99.78, 10.22, 15.23, 34.86};
    int size = sizeof(harga)/sizeof(double);          
    double total = getTotal(harga, size);               // fungsi getTotal mengambil 2 parameter, yaitu array dan variable.
                                                        // cukup ketik nama array tanpa []
    std::cout << "Total: " << total;
    return 0;
}

double getTotal(double harga[], int size){              // di dalam fungsi tetap diketik dengan [], menandakan passing array.
    double total = 0;

    // variable size berguna untuk mengatur jumlah elemen array
    // karena ketika passing, array hanya mengirimkan alamat memory, tidak dengan jumlah/isi dari array
    for(int i = 0; i < size; i++){
        total += harga[i];
    }

    return total;
}
