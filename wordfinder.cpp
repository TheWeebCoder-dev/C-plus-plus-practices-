#include <iostream>
#include <string>
using namespace std;

string sentence;
string word;

int main(){
cout <<"please enter a sentence" <<endl;
getline(cin,sentence);
cout << "now enter a word that you would like to find according to that sentence" <<endl;
cin >> word;
cout << "the lenght of that sentence is " <<sentence.length() <<endl;
cout << "and the position of the word you are searching for is " <<sentence.find(word) <<endl;
cout <<"have a nice day user" <<endl;
}