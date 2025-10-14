#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int>numbers;
    numbers.push(2);
    numbers.push(4);
    numbers.push(5);
    numbers.push(6);
    numbers.push(7);

    cout << numbers.top() <<endl;

}