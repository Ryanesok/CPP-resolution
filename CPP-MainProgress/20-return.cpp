#include <iostream>

double square(double length);
std::string fullName(std::string fname, std::string lname);

int main(){
    // return type dalam c++ maksudnya adalah mengembalikan nilai dari suatu fungsi.
    // return juga berarti akhir blok kode suatu fungsi.
    // return berlaku untuk non-void function. 
    // jika fungsi merupakan void maka tidak memerlukan return. 
    
    double length = 5.33;
    std::string fname, lname;
    std::cout << "Luas: " << square(length); 
    
    std::cout << "Nama depan: ";
    std::cin >> fname;

    std::cout << "Nama belakang: ";
    std::cin >> lname;

    std::cout << "Nama lengkap: " << fullName(fname, lname);
    return 0;       // ini adalah akhir dari fungsi main()
}

double square(double length){
    return length * length;     // ini adalah akhir dari fungsi square.
}

std::string fullName(std::string fname, std::string lname){
    return fname + ' ' + lname;
}
