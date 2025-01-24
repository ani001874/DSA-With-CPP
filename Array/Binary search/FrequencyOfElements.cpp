#include<iostream>
#include <vector>
using namespace std;
 
int main()
{
   vector <int> arr = {1,2,3,4,5,6};
    int start = 0, end = arr.size() -1,
            first = -1 , last = -1;
     int target = 2;     
    while (start <=end) {
        int mid = start + (end-start)/2;
        
        if(arr[mid] == target ) {
            first = mid;
            end = mid-1;
        } else if(arr[mid] > target) {
            end = mid-1;
        }else {
            start = start + 1;
        }
    }
    
    start =0,end = arr.size() -1;
    
    
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            last = mid;
            start = mid+1;
        }else if(arr[mid] > target) {
            end = mid-1;
        }else {
            start = start + 1;
        }
    }
    
    
      if(first == -1) 
        cout << 0 << endl;
       else
         cout << last -first +1 << endl;
       

  return 0;
}