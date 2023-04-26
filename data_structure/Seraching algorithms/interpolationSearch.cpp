#include <iostream>
using namespace std;

int interpolationSearch(int array[], int size, int x)
{
    int low = 0;
    int high = size - 1;

    while (low <= high && x >= array[low] && x <= array[high])
    {
        int pos = low + ((x - array[low]) * (high - low)) / (array[high] - array[low]);
        if (array[pos] == x)
        {
            return pos;
        }
        if (array[pos] > x)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }

    return -1;
}

int main()
{
    return 0;
}