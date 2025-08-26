#include <iostream>

int searchArray(int array[], int size, int element);

int main(){
    // search dalam array yaitu mencari elemen dalam satu array.
    // jika ada kembalikan nilai itu (indeks)
    // jika tidak kembalikan -1 (tidak ketemu).

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(int);
    int index, num;

    std::cout << "Masukkan elemen yang dicari: ";
    std::cin >> num;

    index = searchArray(numbers, size, num);

    if (index >= 0){
        std::cout << "\nElement ada di indeks: " << index;
    }else{
        std::cout << "\nElement tidak ada!";
    }

    return 0;
}
    // contoh yang dipakai di kode ini adalah linear search, masih banyak metode search lain.
int searchArray(int array[], int size, int element){            // khusus array bertipe int. 
                                                                // jika array berupa string atau double, ganti parameter array dan element saja
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}