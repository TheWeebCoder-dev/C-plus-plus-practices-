#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string userInput;
int userFunctionSelection;

void Capitalize(string data){
    string capitalizedData;

    for(int i=0;i<data.length();++i){
capitalizedData += toupper(data[i]) ;   
}
    cout << "here is your capitalized word " <<capitalizedData;
}

void Lower(string data){
    string lowercasedData;
    for (int i=0; i < data.length(); i++)
    {
     lowercasedData += tolower(data[i]);
    }
   cout << "here is your lowedcase word " <<lowercasedData;
    
}

int main(){
    cout << "Please enter a word" <<endl;
    cin >> userInput;
    cout << "Select an option: 1 to capitalize your word or 2 to lowercase your word " <<endl;
    cin >> userFunctionSelection;
switch (userFunctionSelection)
{
case 1:
    Capitalize(userInput);
    break;

    case 2:
    Lower (userInput);
    break;
default:
cout << "Please enter a word that is correct" << endl;
    break;
    return 0;
}
return 0;


}