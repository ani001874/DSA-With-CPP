
#include <iostream>
using namespace std;

void swapIdxToIdx(int a, int b, string &str)
{
    while (a < b)
    {
        swap(str[a], str[b]);
        a++;
        b--;
    }
}

bool isRotatedByK(string str1, string str2, int k)
{
    if (str1.length() != str2.length())
        return false;
    int n = str1.length();
    swapIdxToIdx(0, n - k - 1, str1);
    swapIdxToIdx(n - k, n - 1, str1);
    swapIdxToIdx(0, n - 1, str1);
    if (str1 == str2)
        return true;
    else
        return false;
};

int main()
{
    bool isRotatedBy2 = isRotatedByK("leetcode", "deleetco", 2);
    cout << isRotatedBy2 << endl;

    return 0;
}