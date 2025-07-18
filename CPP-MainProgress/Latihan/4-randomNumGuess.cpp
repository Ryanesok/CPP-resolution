#include <iostream>
#include <ctime>

int main(){
    // project : membuat random number guess game.
    // cara main : tebak angka sampe mampus :p
    
    srand(time(0));

    int num = rand() % 100 + 1;
    int guess, tries = 0;

    do{
        tries++;
        std::cout << "Guess the number!";
        std::cin >> guess;
        if(guess > num){
            std::cout << "\nToo high!";
        }else if(guess < num){
            std::cout << "\nToo low!";
        }else{
            std::cout << "\nYou win!, the number is: " << num;
            std::cout << "\nTries: " << tries << "\n";
            break;
        }
        std::cout << "Tries: " << tries << "\n";
    }while(guess != num);

    return 0;
}