#include<iostream>
using namespace std;
#include <vector>
 
int main()
{
// Find Index of target Element
vector<int> nums = {1,1,1,3,6,6};
int start = 0,end=nums.size();
int target = 2;
int index = -1;
while(start <= end) {
   int mid = start +(end-start)/2;
  
   if(nums[mid] == target ){
     index = mid;
     break;
   } else if (nums[mid] > target) {
    index = mid;
    end = mid -1;
   } else {
 
       start = mid +1;
       
   }
}

cout << "Index of " << target << " is: " << index << endl;
  return 0;
}