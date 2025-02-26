#include <iostream>
#include <vector>
using namespace std;

void mergeTwoArray(vector<int> &arr, int start, int mid, int end)
{
    
    int left = start, right = mid + 1;

    vector<int> temp(end - start + 1, 0);
    int index = 0;

    while (left <= mid && right <= end)
    {

        if (arr[left] >= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    while (right <= end)
    {
        temp[index++] = arr[right++];
    }

    index = 0;
    while (start <= end)
    {
        arr[start++] = temp[index++];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
   
    if(start == end) return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    mergeTwoArray(arr,start,mid,end);
}

int main()
{

    vector<int> arr = {6,4,7,2,9,8,3,5};
    for (int el : arr)
        cout << el << " ";
    cout << endl;
    mergeSort(arr, 0, arr.size() - 1);
    for (int el : arr)
        cout << el << " ";

    cout << endl;

    return 0;
}