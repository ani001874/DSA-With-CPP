#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;
    int * arr = new int[n];
    cout << "Elements of array: " ;
    for(int i =0;i<n;i++) {
        cin >> arr[i];
    }
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int a = i, b = i + 1, c = i + 2;
        if (arr[a] < arr[b] && arr[c] < arr[b])
        {
            index = b;
            cout << "Peak Index is: " << index << endl;
        }

      if(a == 0) {
        if(arr[a] > arr[b]) {
            index = a;
            cout << "Peak Index is: " << index << endl;
        }
      }

        if (c == n-1) {
            if(arr[c] > arr[b]) {
                index = c;
                cout << "Peak Index is: " << index << endl;
            }
            break;
        }

        
    }
    return 0;
}