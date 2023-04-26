#include <iostream>
using namespace std;

int jumpSearch(int arr[], int size, int x)
{
    int blockSize = sqrt(size);
    int step = blockSize;
    int prev = 0;

    while (arr[step - 1] < x)
    {
        prev = step;
        step += blockSize;
        if (prev >= size)
            return -1;
    }
    
    while (arr[prev] < x)
    {
        prev++;
        if (prev == step)
            return -1;
    }

    if (arr[prev] == x)
        return prev;
    return -1;
}

int main()
{
    return 0;
}