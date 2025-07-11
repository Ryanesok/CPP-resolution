#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0;
    float fnum = 0.0;
    double dnum = 0.00;
    char letter = ' ';
    bool condition = true;
    string text = " ";

    cout << "masukkan nilai integer: ";
    cin >> num;

    cout << "\nmasukkan nilai float: ";
    cin >> fnum;

    cout << "\nmasukkan nilai double: ";
    cin >> dnum;

    cout << "\nmasukkan karakter char: ";
    cin >> letter;

    cout << "\nmasukkan nilai kondisi: (1/0)";
    cin >> condition;

    cout << "\nmasukkan kata-kata: ";
    cin >> text;

    cout << "\nnilai yang telah diinput: ";
    cout << "\nint : " << num;
    cout << "\nfloat : " << fnum;
    cout << "\ndouble : " << dnum;
    cout << "\nchar : " << letter;
    cout << "\nboolean : " << condition;
    cout << "\nstring : " << text;

    return 0;
}