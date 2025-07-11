#include <iostream>
#include <string>
using namespace std;

int main(){
    // cout <<                              | # digunakan untuk mengeluarkan variable, string
    // cin >>                               | # digunakan untuk memasukkan user input 
    // getline(cin >> std::ws, variable)    | # digunakan untuk memasukkan tipe data string, ws digunakan sebagai penanda agar cin di atas getline (jika ada) tidak melewati getline. 
    //                                          biasa digunakan untuk nama lengkap dan sejenisnya.
    
    string name;                // Deklarasi string
    int a;                      // Deklarasi variable
    cout << "Masukkan angka: "; // Output = Masukkan angka: 
    cin >> a;                   // input dari keyboard dimasukkan ke dalam variable 
    cout << "\nAngka yang dimasukkan: " << a;

    cout << "\nMasukkan nama: ";
    getline(cin >> std::ws, name);
    cout << "\nNama yang dimasukkan: " << name;

    return 0;
}