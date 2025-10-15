#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch1(vector<int>&arr,int target){
    int low = 0;
    int high = arr.size() -1;
    int first = -1;
    while (high >= low){
        int mid = low + (high - low )/2;

        if(arr[mid] == target){
            first = mid;
            high = mid -1;
        }

       else if(arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
       
    }
     return first;
}


int binarySearch2(vector<int>&arr,int target){
    int low = 0;
    int high = arr.size() -1;
    int second = -1;
    while (high >= low){
        int mid = low + (high - low )/2;

        if(arr[mid] == target){
            second = mid;
            low= mid +1;
        }

        if(arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
       
    }
     return second;
}


int main(){
vector<int>nums = {5,7,7,8,8,10};
int target = 8;
int first = binarySearch1(nums,target);
int last = binarySearch2(nums,target);
if(first == -1){
    cout << "your target digit doesnt exist inside the array \n";
}
else{
    cout << "your target digit exist at index: " <<first <<endl;
    cout << "your target digit exist at index: " <<last <<endl;

}
return 0;


}