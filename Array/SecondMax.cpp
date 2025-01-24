#include <iostream>
using namespace std;
#include <climits>

int findSecondMax(int *arr, int n)
{

  int first_max = INT_MIN;
  int second_max;
  for (int i = 0; i < n; i++)
  {

    if (first_max < arr[i])
    {
      second_max = first_max;
      first_max = arr[i];
    }

    else if (second_max < arr[i] && second_max < first_max) {
      second_max = arr[i];
    }

    
  }
  return second_max;
}
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  int second_max = findSecondMax(arr, n);
  cout << "Second Max : " << second_max;
  cout << endl;

  return 0;
}