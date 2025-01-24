#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0,0,0,0,0};
    int start = 0, end = arr.size() - 1, first = -1, last = arr.size();

    while(start <=end) {
        int mid = start + (end-start)/2;

       if(arr[mid] == 0) {
           first = mid;
           end = mid-1;
       }else {
        start = start + 1;
       }
    }


    if(first == -1) {
        cout << 0 << endl;
    }else {
        cout << last - first << endl;
    }

    
    return 0;
}