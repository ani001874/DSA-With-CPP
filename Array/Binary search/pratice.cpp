#include<iostream>
using namespace std;
#include <vector>

// find appropriate postion of given number if present else return -1

int appropriatePosition(vector<int> arr,int target) {
    int start = 0, end = arr.size() -1,mid, index =arr.size();

    while(start<= end) {
        mid = start + (end-start)/2;
        if(arr[mid] >= target ) {
            index = mid;
            end = mid -1;
        } else {
            start = start + 1;
        }
    }


    return index;
}


// find the peak index of the mountain array


int peakIndexInMountainArray(vector<int>& arr) {
       int start = 0,end = arr.size() -1,mid,index = -1;
       while(start <= end) {
         mid = start + (end-start)/2;
         cout << "mid is: " << arr[mid-1] << endl;
         if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1]) {
            return mid;
         }else  if(arr[mid] > arr[mid + 1]) {
             end = mid -1;
         } else {
            start = start + 1;
         }
         
       }

       return index; 




    }


 
int main()
{
 vector <int> arr = {2,5,8,11,15};
 int app_postion = appropriatePosition(arr,1);
 cout << app_postion << endl;
 vector <int> mountainArr =  {2,4,6,8,10,8};
 int peakIndex = peakIndexInMountainArray(mountainArr);
 
 cout << "Peak Index of Mountain Array : " << peakIndex << endl;
  return 0;
}