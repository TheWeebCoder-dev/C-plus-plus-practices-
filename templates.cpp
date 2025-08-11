#include <iostream>
#include <string>

using namespace std;

template<typename data>
void UserData(data info){
cout << info << endl;
}


int main(){
UserData(1);
UserData("VAMOS");
UserData(10.20);
}