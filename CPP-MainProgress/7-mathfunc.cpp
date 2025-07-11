#include <iostream>
#include <cmath>

int main(){
    // fungsi matematika built-in dari c++ :
    // max(a, b)  | mencari nilai max dari 2 angka (melakukan compare)
    // min(a, b)  | mencari nilai min dari 2 angka 
    // pow(a, b)  | melakukan perpangkatan a sebanyak pangkat b
    // sqrt(a)    | melakukan akar pangkat dari a
    // abs(a)     | melakukan nilai absolut (non-negatif) pada a
    // round(x)   | melakukan pembulatan pada x
    // ceil(x)    | melakukan pembulatan ke atas pada x
    // floor(x)   | melakukan pembulatan ke bawah pada x

    double x = 3.12;
    double y = 2.89;
    double a, z;

    // z = std::max(x, y);
    // z = std::min(x,y);
    // z = pow(x, y);
    // z = sqrt(x);
    // z = abs(-2);
    // z = round(x);
    // a = round(y);
    z = ceil(x);
    a = floor(y);
    std::cout << z;
    std::cout << a;
    return 0;
}