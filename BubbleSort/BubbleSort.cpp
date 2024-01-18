#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // For round 1
        bool Swapped = false;
        for (int j = 0; j < n - i; j++)
        { // less than n -1 means we go till n -2 only;;;;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                Swapped = true;
            }
        }
        if (Swapped == false)
        {
            cout << "Already Sorted" <<endl;
            break;
        }
    }
    // for printing
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // int arr[5] = {3,45,7,8,4};

    int arr[5] = {1, 2, 3, 4, 5};

    BubbleSort(arr, 5);
}