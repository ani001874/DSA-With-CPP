#include <iostream>
using namespace std;
#include <vector>

int countSubSetEqualToTarget(vector<int> arr, int index, int target, vector<int> temp)
{
    if (index == arr.size() && target == 0)
    {
        return 1;
    }
    else if (index == arr.size())
    {
        return 0;
    }
    else if (target < 0)
    {
        return 0;
    }

    int x = countSubSetEqualToTarget(arr, index + 1, target, temp);


    int y = countSubSetEqualToTarget(arr, index + 1, target - arr[index], temp);
    //  cout << x + y << endl;
    return x + y;
}

int main()
{
    vector<int> arr = {0,10,0};
    int target = 0;
    vector<int> temp;
    cout << countSubSetEqualToTarget(arr, 0, target, temp) << endl;
    return 0;
}