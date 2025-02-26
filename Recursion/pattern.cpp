
#include<iostream>
#include <vector>
using namespace std;

// print a pattern like n , n-5, n-10 , n-15  till n<= 0   then repalce n with  n+5, n+10 upto intial value of n
 
class Solution {
      
    public:
        vector<int> v;
        vector<int> fn(int N) {
            if(N <= 0) {
                v.push_back(N);
                return v;
            }
           
            v.push_back(N);
             fn(N-5);
            v.push_back(N);
            return v;
        }
};




int main()
{
 Solution s;
 vector<int> v = s.fn(10);
 for(int ele:v) {
    cout << ele << " ";
 }
 cout << endl;
  return 0;
}

