#include <iostream>  // For input-output operations

// Function declarations
void checkBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {
    double balance = 1000.00;  // Initial balance
    int choice;  // Variable to store user's menu choice
    do {
        // Display menu
        std::cout << "\n====== Banking Management System ======" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        // Switch case to handle user's choice
        switch(choice) {
            case 1:
                checkBalance(balance);  // Call function to check balance
                break;
            case 2:
                deposit(balance);  // Call function to deposit money
                break;
            case 3:
                withdraw(balance);  // Call function to withdraw money
                break;
            case 4:
                std::cout << "Exiting the system. Thank you!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please enter a number between 1 and 4." << std::endl;
        }
    } while (choice != 4);  // Loop until user selects option 4 (Exit)

    return 0;  // End the program
}

// Function to check the balance
void checkBalance(double balance) {
    std::cout << "Your current balance is: $" << balance << std::endl;
}

// Function to deposit money
void deposit(double &balance) {
    double amount;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;

    if (amount > 0) {
        balance += amount;  // Add the deposited amount to the balance
        std::cout << "Successfully deposited $" << amount << std::endl;
        std::cout << "Updated balance: $" << balance << std::endl;
    } else {
        std::cout << "Invalid deposit amount. Try again!" << std::endl;
    }
}

// Function to withdraw money
void withdraw(double &balance) {
    double amount;
    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance -= amount;  // Deduct the withdrawn amount from the balance
        std::cout << "Successfully withdrew $" << amount << std::endl;
        std::cout << "Updated balance: $" << balance << std::endl;
    } else if (amount > balance) {
        std::cout << "Insufficient balance for this withdrawal." << std::endl;
    } else {
        std::cout << "Invalid withdrawal amount. Try again!" << std::endl;
    }
}