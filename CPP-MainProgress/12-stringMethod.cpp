#include <iostream>
#include <string>

int main(){
    // method dalam string yang berguna adalah:
    // string.length()                  = menghitung total char dalam string
    // string.empty()                   = mengembalikan nilai boolean true jika string kosong
    // string.clear()                   = menghapus isi dari string
    // string.append("string")          = menambahkan string/karakter baru di belakang string
    // string.at(index)                 = mengembalikan karakter dalam string pada index yang diminta (mulai dari 0)
    // string.insert(index, "string")   = memasukkan karakter pada index yang diminta
    // string.find("string")            = mencari karakter dalam string dan mengembalikan nilai index karakter
    // string.erase(awal, akhir)        = menghapus karakter dari index awal ke index terakhir yang diminta
    std::string name;
    std::cout << "Masukkan nama: ";
    std::getline(std::cin, name);

    std::cout << "nama kosong? " << name.empty();
    std::cout << "panjang nama: " << name.length();
    std::cout << "username: " << name.append("2211");
    std::cout << "huruf depan: " << name.at(0);

    return 0;
}