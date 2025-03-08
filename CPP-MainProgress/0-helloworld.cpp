//library dari I/O pada cpp
#include <iostream>

//fungsi untuk mempersingkat command standar pada I/O
//tapi lebih baik tidak menggunakan namespace karena ditakutkan akan terjadinya konflik nama
using namespace std;
//karena namespace membuat semua simbol menjadi global namespace

//fungsi utama yang akan dieksekusi pertama kali
int main(){
  cout << "Hello, World"; //cout adalah command output pada console
  return 0;               //karena fungsi main bertipe int, maka harus mengembalikan nilai int juga
}