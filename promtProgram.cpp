#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int partNumber;
    int quantity;
    double unitPrice;
    double totalPrice;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the part number: " << endl;
    cin >> partNumber;
    cout <<"Enter the quantity of this part ordered " <<endl;
    cin >> quantity;
    cout << "Enter the unit price for this part" <<endl;
    cin >> unitPrice;
    
    totalPrice = quantity * unitPrice;
    cout << "Part " <<partNumber 
    <<", quantity " <<quantity
    <<", at $ " <<unitPrice << " each" <<endl;
    cout <<"totals: " <<totalPrice <<endl;
    return 0;


}