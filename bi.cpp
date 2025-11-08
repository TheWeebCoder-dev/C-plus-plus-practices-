#include <iostream>
#include <vector>
using namespace std;

int Binaraysearch(vector<int>&arr,int target){
    int low = 0;
    int high = arr.size() - 1;
while(high > low){ 
    int mid = low + (high-low)/2;
if(arr[mid] == target){
    return mid;
}    
if(arr[mid] < target){
    low = mid + 1;
}
else{
    high = mid -1;
}

}
return -1;
}



int main(){
 vector<int> arr = {5,10,20,30};
 int target = 20;
 int result = Binaraysearch(arr,target);
if(result == -1){
    cout<< "element is not present in the array";
}
else{
    cout<< "number at " <<result;
}
 return 0;
}