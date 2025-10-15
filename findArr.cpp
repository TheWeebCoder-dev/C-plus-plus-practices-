#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>arr,int target){
    int low = 0;
    int high = arr.size() -1;
    while(high >= low){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
high = mid -1;            
        }
        else{
            low = mid +1;
        }
    }
    return -1;
}


int main(){
vector<int>nums = {4,5,6,7,0,1,2};
int target = 7;
sort(nums.begin(),nums.end());
for(auto x : nums){
    cout << x <<" ";
}
cout <<endl;
int result=binarySearch(nums,target);
if(result == -1){
    cout << "doesnt exist \n";
}
else{
    cout << "exist at index: " <<result <<endl;
}
}