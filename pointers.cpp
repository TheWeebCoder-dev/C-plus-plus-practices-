#include <iostream>

using namespace std;

void Swap(int*x,int*y){
 int arg = *x;
 int arg2 = *y;
 *y = arg;
 *x =arg2;
}

int main(){
int a= 5;
int b= 10;

cout <<"current numbers" <<a <<b <<endl;

Swap(&a, &b);

cout <<"current numbers" <<a <<b <<endl;

return 0;

}

