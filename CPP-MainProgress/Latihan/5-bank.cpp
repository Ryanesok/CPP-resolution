#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    // project : membuat simulasi banking sederhana.
    double balance = 0;
    int choice;
    do
    {
        std::cout << "\n=== Simulasi bank ===";
        std::cout << "\n1.) Cek saldo";
        std::cout << "\n2.) Deposit";
        std::cout << "\n3.) Tarik";
        std::cout << "\n4.) Keluar";
        std::cout << "\nPilih (1 - 4)";
        std::cin >> choice;
        
        switch (choice)
        {
        case 1:
            std::cout << "\nSaldo anda: ";
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "\nTerima kasih telah mencoba simulasi ini!";
            break;
        default:
            std::cout << "\nSilahkan masukkan pilihan antara 1 - 4";
            break;
        }

    } while (choice != 4);
    return 0;
}

void showBalance(double balance){
    std::cout << balance;
}
double deposit(){
    double nominal;
    std::cout << "\n=== DEPOSIT ===";
    std::cout << "\nMasukkan nominal : ";
    std::cin >> nominal;
    if(nominal > 0){
        return nominal;
    }else{
        std::cout << "\nNominal tidak valid";
        return 0;
    }
}

double withdraw(double balance){
    double nominal = 0;
    std::cout << "\n=== TARIK ===";
    std::cout << "\nSaldo saat ini " << balance;
    
    if(balance <= 0.00){
        std::cout << "\nMaaf, saldo tidak cukup!";
        return 0;
    }else{
        std::cout << "\nMasukkan nominal: ";
        std::cin >> nominal;
        if(nominal <= balance){
            return nominal;
        }else{
            std::cout << "\nMaaf, saldo tidak cukup untuk ditarik!";
            nominal = 0;
            return nominal;
        }
    }
}