#include <iostream>
using namespace std;
#include <vector>

 void permutate(
    vector<vector<int>> &ans, 
    vector<int> &temp, 
    vector<bool> &visited, 
    vector<int> &arr
)
{

    if(arr.size() == temp.size()) {
        ans.push_back(temp);
        return;
    }

    for(int i =0;i<arr.size();i++){
        if(!visited[i]) {
            visited[i] = true;
            temp.push_back(arr[i]);
            permutate(ans,temp,visited,arr);
            visited[i] = false;
            temp.pop_back();
        }
    }
}

void permutateWES(int index,vector<int> arr,vector<vector<int>> &ans) {
    if(index == arr.size()) {
        ans.push_back(arr);
        return;
    }

    for(int i = index;i<arr.size();i++) {
        swap(arr[i],arr[index]);
        permutateWES(index+1,arr,ans);
        swap(arr[i],arr[index]);
    }

}

int main()
{
    vector<vector<int>> ans;
    // vector<int> temp;
    vector<int> arr = {1,2,3};
    // vector<bool> visited(arr.size(),false);
    // permutate(ans, temp, visited, arr);

    permutateWES(0,arr,ans);


    for(int i = 0;i<ans.size();i++){
      for(int j = 0;j<ans[i].size();j++){
        cout << ans[i][j] << " ";
      }

      cout << endl;
    }
    return 0;
}