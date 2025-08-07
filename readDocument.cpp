#include <iostream>
#include <fstream>

using namespace std;
int main (){
 int wholeValues;
 ifstream desiredLecture;

 desiredLecture.open("C:/Users/Cpedr/Desktop/neue c++/text.txt");
 if (!desiredLecture.is_open()){
    cout<< "error file not found" <<endl;
 }
desiredLecture >> wholeValues;
desiredLecture.close();
cout << wholeValues;



 return 0;
}
