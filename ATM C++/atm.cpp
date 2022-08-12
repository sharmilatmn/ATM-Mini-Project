#include <iostream>
#include <stdlib.h>

void showMenu() {
    std::cout << "************** MENU **************" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Make a deposit" << std::endl;
    std::cout << "3. Withdraw funds" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "**********************************" << std::endl;
}

int main() {
    //Functionalities:
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    double deposit;
    double withdrawal;

    do {
        showMenu();
        std::cout << "Option: ";
        std::cin >> option;
        system("clear");

        switch (option) {
            case 1: 
                std::cout << "Balance is: £" << balance << std::endl;
                break;
            case 2:
                std::cout << "How much do you want to deposit? " << std::endl;
                std::cout << "£";
                std::cin >> deposit;
                balance += deposit;
                std::cout << "New balance: £" << balance << std::endl;
                break;
            case 3: 
                std::cout << "How much do you want to withdraw? " << std::endl;
                std::cout << "£";
                std::cin >> withdrawal;
                if (withdrawal <= balance) {
                    balance -= withdrawal;
                    std::cout << "New balance: £" << balance << std::endl;
                }
                else {
                    std::cout << "Sorry! You do not have enough funds." << std::endl;
                }
                break;
            default:
                std::cout << "Please select a valid option." << std::endl;
                break;
        }
    } while (option != 4);
}