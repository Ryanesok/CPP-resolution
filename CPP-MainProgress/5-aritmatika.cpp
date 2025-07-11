#include <iostream>

int main(){
    // operator aritmetik dalam c++ mengembalikan nilai
    // dari operasi matematika. (+, -, /, * dan %)
    // contoh + :
    int students = 20;
    
    // cara 1: variable = variable + angka
    students = students + 1;
    std::cout << "students: " << students;

    // cara 2: variable += angka
    students += 1;
    std::cout << "students: " << students;

    // cara 3: variable++ (untuk pertambahan 1) / variable-- (untuk pengurangan 1) 
    students++;
    std::cout << "students: " << students;

    // cara-cara diatas berlaku untuk ke empat operator kecuali untuk perkalian, pembagian dan modulus.
    // urutan pengerjaan operasi adalah:
    // (dalam kurung) => perkalian & pembagian => pertambahan & pengurangan
    // contoh :
    students = students + 1 - 2 * 5 + (10 / 5);
    std::cout << "students: " << students;

    return 0;
}