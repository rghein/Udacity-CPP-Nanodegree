#include <iostream>
#include <string>

//  Create class called BankAccount
//  Use typical info about bank accounts to design attributes, 
//  such as the account number, the owner name, and the available funds.
//  Set the access modifiers so that member data 
//  are protected from other parts of the program.
//  Create getters and setters for all class attributes.

class BankAccount
{
  private:
    // TODO: declare member variables
    std::string ownerName;
    int accountNumber;
    float availableFunds;

  public:
      // TODO: declare setters
      void setOwnerName(std::string name);
      void setAccountNumber(int number);
      void setAvailableFunds(float amount);

      // TODO: declare getters
      std::string getOwnerName() const;
      int getAccountNumber() const;
      float getAvailableFunds() const;
};

// TODO: implement setters
void BankAccount::setOwnerName(std::string name) {
  ownerName = name;
}
void BankAccount::setAccountNumber(int number) {
  accountNumber = number;
}
void BankAccount::setAvailableFunds(float amount) {
  availableFunds = amount;
}
// TODO: implement getters
std::string BankAccount::getOwnerName() const {
  return ownerName;
}
int BankAccount::getAccountNumber() const {
  return accountNumber;
}
float BankAccount::getAvailableFunds() const {
  return availableFunds;
}

int main() {
    // TODO: instantiate and output a bank account
    BankAccount account;
    account.setOwnerName("John Doe");
    account.setAccountNumber(1);
    account.setAvailableFunds(0.00);
    std::cout << "Owner Name: " << account.getOwnerName() << "\n";
    std::cout << "Account Number: " << account.getAccountNumber() << "\n";
    std::cout << "Available Funds: " << account.getAvailableFunds() << "\n";
}