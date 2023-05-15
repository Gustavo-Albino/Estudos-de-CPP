#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdrawn(double balance);

int main() 
{
    double balance = 200;
    int choice = 0;
    
    do {
        std::cout << "\n******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n\n";
        std::cout << "(1) Show Balance\n";
        std::cout << "(2) Deposit Money\n";
        std::cout << "(3) Withdrawn Money\n";
        std::cout << "(4) Exit\n";
        std::cin >> choice;

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                withdrawn(balance);
                break;
            case 4:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is $" << balance << std::setprecision(2) << std::endl;
}

double deposit() {
    double amount = 0;
    std::cout << "Enter amount to be deposited: " << std::endl;
    std::cin >> amount;
    if (amount > 0)
        return amount;
    else {
        std::cout << "That's not a valid amount: Your balance is: $0.00" << std::endl;
        return 0;
    }
}

double withdrawn(double balance) {
    double amount = 0;
    std::cout << "Enter your amount to be withdrawn: ";
    std::cin >> amount;
    
    if (amount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    
    return amount;
}