void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// Selection Sort
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
