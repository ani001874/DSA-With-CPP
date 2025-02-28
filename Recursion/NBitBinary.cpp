#include <iostream>
using namespace std;
#include <vector>


vector<string> NBitBinary(int n,int o,int z,string str,vector<string> &ans) {
    if(str.size() == n) {
         ans.push_back(str);
        return ans;
    }

    str.push_back('1');
    NBitBinary(n,o+1,z,str,ans);
    str.pop_back();
    if(o > z) {
        str.push_back('0');
        NBitBinary(n,o,z+1,str,ans);
        
    }
    return ans;
}

int main()
{
    vector<string> ans;
    string str;
    int  n = 4, o = 0, z = 0;
    ans = NBitBinary(n,o,z,str,ans);
    
    cout << "From ans vector: " << endl;

    for(int i = 0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    

    return 0;
}
