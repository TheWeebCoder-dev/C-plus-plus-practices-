#include <iostream>
#include <string>
using namespace std;

string sentence;
string word;
int eliminationOfCharacters;


int main(){
cout <<"please enter a sentence" <<endl;
getline(cin,sentence);
cout << "now enter a word that you would like to find according to that sentence" <<endl;
cin >> word;
cout << "the lenght of that sentence is " <<sentence.length() <<endl;
cout << "and the position of the word you are searching for is " <<sentence.find(word) <<endl;
cout << "now based of the word position we will mark the beggining and ending of the word"<<endl;
cout << "now enter which number of characters you want to cut word you want to cut" <<endl;
cin >> eliminationOfCharacters;
cout << "the result is: " <<word.substr(eliminationOfCharacters) <<endl;
cout <<"have a nice day user" <<endl;
}