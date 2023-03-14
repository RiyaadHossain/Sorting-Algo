#include <iostream>
using namespace std;

// To Print Array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// To Swap 
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// 1. Selection Sort
void selection_sort(int arr[], int n)
{

    int min;

    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(arr, min, i);
        }
    }
}

int main()
{

    int n = 5;
    int arr[n] = {2, 5, 1, 3, 4};

    selection_sort(arr, n);
    printArr(arr, n);

    return 0;
}