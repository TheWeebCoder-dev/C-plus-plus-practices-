#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>&arr,int x){
int low=0;
int high = arr.size() -1;

    while(high >=low){
        int mid = low + (high - low)/2;

        if(arr[mid]== x){
            return mid;
        }
        else if(arr[mid] > x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
       
    }
     return -1;
}


int main(){
vector<int> digits = {10,20,40,50,30};
sort(digits.begin(),digits.end());
int x = 50;
int result = binarySearch(digits,x);
if (result == -1) cout <<"element is not present \n";
else cout <<"element is present at index:" <<result <<endl; 
return 0;
}