#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
int n;
cin >> n;
vector<int> l(n);

for(int i=0; i < n; i++){
    cin >> l[i];
}



int acumulacion = 0;
for (int x = 0; x < n; x++)
{
    acumulacion += l[x];
}

double promedio = (double)acumulacion/n;


cout <<promedio <<endl;

return 0;
}