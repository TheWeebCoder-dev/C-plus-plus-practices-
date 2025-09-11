#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
    time_t currentTime= time(NULL);
char* timeString = ctime(&currentTime);
cout << "the current time is: " << timeString;
struct tm *localTime = localtime(&currentTime);

    return 0;
}