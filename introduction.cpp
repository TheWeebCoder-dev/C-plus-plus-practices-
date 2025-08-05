#include <iostream>
using namespace std;

int Square(int);
int Circle(int);
double Andere(double);

int main(){
    cout << "The square is" <<Square(27) <<endl;
    cout << "The cirlce is" <<Circle(30) <<endl;
    cout << "The special ecuation result is" <<Andere(2.50) <<endl;

    return 0;
}

int Square (int n){
    return n * n;
}
int Circle(int c){
    return c*c*c;
}

double Andere(double r){
    return r*r;
}

