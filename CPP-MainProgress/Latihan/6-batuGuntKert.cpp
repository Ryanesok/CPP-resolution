#include <iostream>
#include <ctime>
#include <cstdlib>

char playerChoice();
char compChoice();
void showChoice(char choice);
void winner(char pchoice, char comchoice, int &pscore, int &cscore);

int main(){
    // project : membuat permainan sederhana batu-gunting-kertas
    
    srand(time(NULL));                      // jangan lupa srand di awal (utk kasus looping)
    char player, computer, pilih;
    int pscore = 0, cscore = 0;
    
    do{
        player = playerChoice();
        std::cout << "Kamu memilih: ";
        showChoice(player);

        computer = compChoice();
        std::cout << "\nKomputer memilih: ";
        showChoice(computer);

        std::cout << "\nHasilnya adalah: ";
        winner(player, computer, pscore, cscore);
        std::cout << "\nSkor saat ini: ";
        std::cout << "\nPlayer      : " << pscore;
        std::cout << "\nComputer    : " << cscore;
        std::cout << "\nIngin lakukan lagi? (y/n)";
        std::cin >> pilih;
        switch(pilih){
            case 'y':
            case 'Y':
                break;
            case 'n':
            case 'N':
                std::cout << "Terima kasih telah bermain!";
                break;
            default:
                std::cout << "kuanggap itu ya:)";
                break;
        }
    }while(pilih != 'n' && pilih != 'N');           // pakai && biar gk eternal looping.
}

char playerChoice(){
    char player;
    do{
        system("cls");
        std::cout << "===============================\n";
        std::cout << "Permainan batu gunting kertas\n";
        std::cout << "Masukkan salah satu dari pilihan ini: \n";
        std::cout << "'r' untuk batu\n";
        std::cout << "'s' untuk gunting\n";
        std::cout << "'p' untuk kertas\n";
        std::cout << "Pilihan : ";
        std::cin >> player;
        switch(player){
            case 'r':
                return player;
                break;
            case 's':
                return player;
                break;
            case 'p':
                return player;
                break;
            default:
                std::cout << "Kamu hanya boleh memilih r, s, atau p";
                break;
        }
    }while(player != 'r' && player != 's' && player != 'p');
    return 0;
}
char compChoice(){
    int computer;
    computer = rand() % 3 + 1;
    if(computer == 1){
        return 'r';
    }else if(computer == 2){
        return 's';
    }else if(computer == 3){
        return 'p';
    }
    return 0;
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "BATU";
        break;
    case 's':
        std::cout << "GUNTING";
        break;
    case 'p':
        std::cout << "KERTAS";
        break;
    default:
        break;
    }
}
void winner(char pchoice, char comchoice, int &pscore, int &cscore){
    if  ((pchoice == 'r' && comchoice == 's') || 
        (pchoice == 's' && comchoice == 'p') ||
        (pchoice == 'p' && comchoice == 'r'))                       // kondisi player menang
    {
        std::cout << "PLAYER MENANG!";
        pscore++;
    }
    else if ((pchoice == 'r' && comchoice == 'p') || 
            (pchoice == 's' && comchoice == 'r') || 
            (pchoice == 'p' && comchoice == 's'))                   // kondisi komputer menang
    {
        std::cout << "COMPUTER MENANG!";
        cscore++;
    }else{
        std::cout << "SERI!";                                       // kondisi seri
    }

    // Tambahan: 
    // bisa pakai switch, meskipun agak ribet, tetapi tidak seribet if else yg terpisah2
}


// Hal yang dipelajari dari project ini:
// #1 beberapa kondisi if-else dapat digabung kalo tujuannya sama, dengan menggunakan penghubung OR (||)
// #2 kalo mau ngubah variable secara remote, yaitu fungsi di luar main, bisa pakai &, yaitu pass reference.