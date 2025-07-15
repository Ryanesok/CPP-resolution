#include <iostream>

double CtoR(double c);
double CtoF(double c);
double CtoK(double c);
double RtoC(double r);
double RtoF(double r);
double RtoK(double r);
double FtoC(double f);
double FtoR(double f);
double FtoK(double f);
double KtoC(double k);
double KtoR(double k);
double KtoF(double k);

int main(){
    // Project : melakukan konversi temperatur dari celsius ke fahrenheit atau sebaliknya
    //           konversi dari reamur ke celcius, maupun kelvin ke celsius.
    int op;
    double c, r, f, k;

    do
    {
        std::cout << "\n== Temperature convertion ==";
        std::cout << "\n1.) Celcius";
        std::cout << "\n2.) Reamur";
        std::cout << "\n3.) Fahrenheit";
        std::cout << "\n4.) Kelvin";
        std::cout << "\n5.) Exit";
        std::cout << "\nMasukkan pilihan: ";
        std::cin >> op;

        switch (op)
        {
        case 1:
            std::cout << "Masukkan derajat suhu dalam C: ";
            std::cin >> c;
            std::cout << "\nReamur      : " << CtoR(c) << " R";
            std::cout << "\nFahrenheit  : " << CtoF(c) << " F";
            std::cout << "\nKelvin      : " << CtoK(c) << " K";
            break;
        case 2:
            std::cout << "Masukkan derajat suhu dalam R: ";
            std::cin >> r;
            std::cout << "\nCelcius     : " << RtoC(r) << " C";
            std::cout << "\nFahrenheit  : " << RtoF(r) << " F";
            std::cout << "\nKelvin      : " << RtoK(r) << " K";
            break;
        case 3:
            std::cout << "Masukkan derajat suhu dalam F: ";
            std::cin >> f;
            std::cout << "\nCelcius     : " << FtoC(f) << " C";
            std::cout << "\nReamur      : " << FtoR(f) << " R";
            std::cout << "\nKelvin      : " << FtoK(f) << " K";
            break;
        case 4:
            std::cout << "Masukkan derajat suhu dalam C: ";
            std::cin >> k;
            std::cout << "\nCelcius     : " << KtoC(k) << " C";
            std::cout << "\nReamur      : " << KtoR(k) << " R";
            std::cout << "\nFahrenheit  : " << KtoF(k) << " F";            
            break;
        case 5:
            std::cout << "Terima kasih telah menggunakan program ini!";
            break;
        default:
            std::cout << "Silahkan masukkan pilihan 1 - 5!";
            break;
        }

    } while (op != 5);
    return 0;
}

double CtoR(double c){
    return 0.8 * c;
}
double CtoF(double c){
    return 1.8 * c + 32;
}
double CtoK(double c){
    return c + 273;
}
double RtoC(double r){
    return 1.25 * r;
}
double RtoF(double r){
    return 2.25 * r; 
}
double RtoK(double r){
    return 1.25 * r + 273;
}
double FtoC(double f){
    return 0.555 * (f - 32);
}
double FtoR(double f){
    return 0.444 * (f - 32);
}
double FtoK(double f){
    return (f + 459.67) * 0.555;
}
double KtoC(double k){
    return k - 273;
}
double KtoR(double k){
    return 0.8 * (k - 273);
}
double KtoF(double k){
    return k * 0.555 - 459.67;
}
