#include <iostream> // Include the necessary header for input/output stream
#include <string> // Include the necessary header for string operations

class BankAccount { // Define a class named BankAccount
  private: 
    std::string accountNumber; // Private member variable to store the account number
    double balance; // Private member variable to store the balance

  public:
    // Constructor to initialize BankAccount object with provided values
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
      balance += amount; // Add the deposited amount to the current balance
      std::cout << "Deposit successful. Current balance: " << balance << std::endl; // Output success message and current balance
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
      if (amount <= balance) { // Check if the withdrawal amount is less than or equal to the current balance
        balance -= amount; // Deduct the withdrawn amount from the current balance
        std::cout << "Withdrawal successful. Current balance: " << balance << std::endl; // Output success message and current balance
      } else {
        std::cout << "Insufficient balance. Cannot withdraw." << std::endl; // Output error message for insufficient balance
      }
    }
};

int main() {
  // Create a bank account object
  std::string sacno = "SB-123"; // Define the account number
  double Opening_balance, deposit_amt, withdrawal_amt; // Define variables for opening balance, deposit amount, and withdrawal amount
  Opening_balance = 1000; // Assign the opening balance
  std::cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl; // Output the account details

  BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  // Deposit money into the account
  deposit_amt = 1500; // Define the deposit amount
  std::cout << "Deposit Amount: " << deposit_amt << std::endl; // Output the deposit amount
  account.deposit(deposit_amt); // Call the deposit method of the account object

  // Withdraw money from the account
  withdrawal_amt = 750; // Define the withdrawal amount
  std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  // Attempt to withdraw more money than the balance
  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
  std::cout << "Attempt to withdrawal Amount: " << withdrawal_amt << std::endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  return 0; // Return 0 to indicate successful completion
}

