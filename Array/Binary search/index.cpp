#include "../ArrayCpp.h"
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {2, 4, 5, 7, 11, 17};

    int start = 0, end = n - 1, mid = (start + end) / 2;
    int key = 4;
    while(start <= end) {
        mid = (start + end) / 2;
       if(key == arr[mid]){
         cout << "Index is: " << mid << endl;
         break;
       }else if(key > arr[mid]) {
         start = mid + 1;
       }else {
        end = mid-1;
       }
    }

    return 0;
}