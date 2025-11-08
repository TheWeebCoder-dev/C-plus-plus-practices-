#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

vector <string> guest= {"maria","edna","kaim","sosoe","tanjiro"};

for(int i = 0; i<guest.size();i++){
if(guest[i] == "kaim"){
    cout << "is at " << i;
    break;
}
}

return 0;
}