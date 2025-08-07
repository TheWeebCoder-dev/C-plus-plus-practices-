#include <iostream>
#include <string> 
using namespace std;

double acceleration;


int main(){
    acceleration = 10;
    while (acceleration<30)
    {
        acceleration++;
        if(acceleration != 30){
            cout<< "that car is a loser" <<endl;
        }
        else{
            cout<<"That car is a winner" <<endl;
        }
    }
    
    return 0;
    
}