#include <vector>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(){
    set<int>num = {1,2,3,4,5} ;
    
    for (int i = 0; i < num.size(); i++)
    {
        if (num.find(2) != num.end())
        {
            cout << "number exist" <<endl;
            break;
        }
        else{
            cout << "number doesnt exist" <<endl;
            break;
        }
        
    }
    
    vector<int>num2;
    for(int i;i<5;i++){
        
    }

    return 0;
}