#include<iostream>
#include <vector>
using namespace std;
 
int main()
{
  vector <int> arr = {2,3,4,7,11};
  int start = 0,end = arr.size() -1, ans = arr.size() -1;
  int k =3;

  while(start <= end) {
    int mid = start + (end-start)/2;
    if(arr[mid] - mid -1 >= k) {
       ans = mid;
       end = mid-1;
    }else {
        start = mid + 1;
    }
  }


  cout << "Missing Elements is: " << ans + k << endl;
  return 0;
}