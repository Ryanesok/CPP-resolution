#include <iostream>

void sort(int array[], int size);

int main(){
    // sorting array menggunakan bubble sort. salah satu metode sort sederhana
    // caranya adalah membandingkan elemen 1 dan 2, jika lebih besar 1, maka ditukar dengan 2
    // 2 lebih besar? ditukar dengan 3, dst sampai loop selesai. maupun sebaliknya
    // setelah melakukan bubble sort, array yang semula acak akan terurut dengan benar.

    int numbers[] = {10, 2, 4, 6, 5, 3, 1, 8, 9, 7};
    int size = sizeof(numbers)/sizeof(int);
    
    std::cout << "Sebelum diurutkan: \n";
    for(int element : numbers){
        std::cout << element << " ";
    }

    sort(numbers, size);                // panggil fungsi 

    std::cout << "\nSetelah diurutkan: \n";
    for(int element : numbers){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){          // Reminder:
                temp = array[j];                // 1.) array[j] di assign ke temp dulu.
                array[j] = array[j+1];          // 2.) array[j+1] di assign ke array[j]
                array[j+1] = temp;              // 3.) temp di assign ke array[j+1]
            }                                   // 4.) kecil ke besar (>) || besar ke kecil (<)
        }
    }
}
