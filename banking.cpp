#include <iostream>
#include <string>

using namespace std;

class banking
{
private:
    /* data */
public:
  int accountNumber;
  string accountHolder;
  double balance;
  
  void deposit(double amount){
    balance += amount;
    cout << amount <<endl;
  }
  void withdraw(double amount){
     balance -= amount;
    cout << amount <<endl;
  }
  void displayDetails(){
    cout <<accountNumber <<endl;
    cout <<accountHolder <<endl;
    cout <<balance <<endl;
  }
};

int main(){
banking Account1;
Account1.accountNumber = 1900;
Account1.accountHolder = "Kevin";
Account1.balance = 4000;
Account1.deposit(3000);
Account1.displayDetails();


banking Account2;
Account2.accountNumber = 2000;
Account2.accountHolder = "Laura";
Account2.balance = 2000;
Account2.withdraw(2000);
Account2.displayDetails();
}