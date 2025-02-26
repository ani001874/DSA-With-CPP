#include <iostream>
using namespace std;
#include <vector>


void NBitBinary(int n,int index,int o,int z,string str,vector<string> &ans) {
    if(index == n) {
         cout << str << endl;
         ans.push_back(str);
        return;
    }

    str.push_back('1');
    NBitBinary(n,index+1,o+1,z,str,ans);
    str.pop_back();
    if(o > z) {
        str.push_back('0');
        NBitBinary(n,index+1,o,z+1,str,ans);
    }
}

int main()
{
    vector<string> ans;
    string str;
    int index = 0, n = 4, o = 0, z = 0;
    NBitBinary(n,index,o,z,str,ans);
    
    cout << "From ans vector: " << endl;

    for(int i = 0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    

    return 0;
}
