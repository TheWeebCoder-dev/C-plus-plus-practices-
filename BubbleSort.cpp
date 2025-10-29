#include <iostream>
#include <vector>
using namespace std;


void BubbleSort(vector<int>&arr){
int n = arr.size();
bool swapped;

for(int i=0;i<n -1;i++){
    swapped = false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j+1] < arr[j] ){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
}
if(!swapped){
    break;
}
    }

}

int main(){
 vector<int>arr = {63,42,89,10,30};
 BubbleSort(arr);
 
 for(auto x : arr){
    cout <<" " <<x;
 }
    

    return 0;
}