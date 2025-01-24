#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>
using namespace std;

int findSecondLargest(vector<int> &numbers)
{
    if (numbers.size() < 2)
    {
        return INT_MIN; // Or some error value
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int num : numbers)
    {
        if (num > largest)
        {
            second_largest = largest; // {12, 35, 1, 10, 34, 1}
            largest = num;
        }
        else if (num > second_largest && num != largest)
        {
            second_largest = num;
        }
    }

    return second_largest;
}

int main()
{
    vector<int> numbers = {12, 35, 1, 10, 34, 1};
    // int result = findSecondLargest(numbers);

    // cout << "Second largest number: " << result << endl;
     
    srand(time(0));
    int random_num = rand() % 100;
    cout << random_num << endl;

    return 0;
}