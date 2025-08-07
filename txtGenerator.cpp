#include <iostream>
#include <fstream>
#include <string>

using namespace std;\

int main(){
    int x = 10;
    int y = 20;
     int z = 30;

     ofstream textdocument;
     textdocument.open("C:/Users/Cpedr/Desktop/neue c++/text.txt");
     if (textdocument.is_open()){
     textdocument << x << y << z;
     }
     else{
        return 1;
     }
     textdocument.flush();
    textdocument.close();


     return 0;
}