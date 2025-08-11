#include <iostream>
#include <string>

using namespace std;

class Dogs
{
private:
    
public:
    string breed;
    int years;

    void Bark(){
        cout <<"Bark,Bark" <<endl;
    }
};


int main (){
Dogs Black;
Black.breed = "Border collie";
Black.years = 15;

cout <<Black.breed <<" " <<Black.years <<endl;
Black.Bark();
}