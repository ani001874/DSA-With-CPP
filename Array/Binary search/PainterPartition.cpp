#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool isValidTime(int painter, int n, int mid, vector<int> boards)
{
    int timeRequired = 0;
    int requiredPainter = 1;
    for (int i = 0; i < n; i++)
    {
        timeRequired += boards[i];
        if (timeRequired <= mid)
        {
            continue;
        }
        else
        {
            timeRequired = boards[i];
            requiredPainter++;
        }
    }

    if (requiredPainter > painter)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int findMinTimetoPaint()
{
    vector<int> boards = {10, 10, 10, 10};
    int start = *max_element(boards.begin(), boards.end());
    int end = accumulate(boards.begin(), boards.end(), 0);
    int painter = 2;
    int minTime;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValidTime(painter, boards.size(), mid, boards))
        {
            minTime = mid;
            end = end - 1;
        }
        else
        {
            start = start + 1;
        }
    }

    return minTime;
}

int main()
{
    int minTime = findMinTimetoPaint();
    cout << "Min time required: " << minTime << endl;
    return 0;
}