#include<iostream>
using namespace std;
#include <vector>

void possibleString(int k,string temp,vector<string> &ans,vector<char> arr) {
    if(temp.size() == k) {
        ans.push_back(temp);
        return;
    }

    for(int i = 0;i<arr.size();i++) {
        temp.push_back(arr[i]);
        possibleString(k,temp,ans,arr);
        temp.pop_back();
         
    }
}
 
int main()
{

  vector<char> arr = {'a','b','c'};
  vector<string> ans;
  string temp;
  possibleString(3,temp,ans,arr);
   for (int i = 0;i<ans.size();i++) {
     cout << ans[i] << endl;
   }

  return 0;
}