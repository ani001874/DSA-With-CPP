int cubeRoot(int n) {
        int start = 0, end = n, mid,cr;
         if(n <=1) return n;
         
        while(start <= end) {
            int mid = start+(end-start)/2;
            if(mid * mid  == n/mid) {
                return mid;
            }else if( mid * mid  < n/mid) {
                cr = mid;
                start = mid +1;
            }else {
                end = mid -1;
            }
        }
        
        return cr;
    }




#include<iostream>
using namespace std;
 
int main()
{
 int cube_root = cubeRoot(1);
 cout << cube_root << endl;
  return 0;
}