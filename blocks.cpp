
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,h=0,b=0,l=1;
    cin >> n;

    while (b + l*l <= n)
    {
        b+=l*l;
        h++;
        l+=2;
      
    }
    
    cout << l <<endl;
    cout << h <<"\n";
    
    return 0;
}