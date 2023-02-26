#include <iostream>
using namespace std;

int countZeroOne(int arr[], int size)
{
    int zeroNumber = 0;
    int oneNumber = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            oneNumber++;
    }
    return oneNumber;
}

int main()
{
    {
        int arr[] = {1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0};
        int size = sizeof(arr) / 4;
        int oneNumber = (countZeroOne(arr, size));
        int zeroNumber = size - oneNumber;
        cout << "Number Zero : " << zeroNumber << endl;
        cout << "Number One : " << oneNumber;
    }

    return 0;
}